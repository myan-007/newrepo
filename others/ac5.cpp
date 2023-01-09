#include <iostream>
using namespace std;

const int N = 1e3 + 10;
const int M = 1e5 + 10000;
long long int p[N][M];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        long long int y,n, m, l, sum, count = 0;
        double x;
        cin >> n >> m >> l;
        for (long long int i = 1; i <= n; i++)
        {
            for (long long int j = 1; j <= m; j++)
            {
                cin >> y;
                p[i][j] = y + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
            }
        }
        for (long long int i = n; i >= 1; i--)
        {
            for (long long int j = i; j <= n; j++)
            {

                for (long long int k = i; k <=m; k++)
                {

                    sum = p[i][k] - p[j - i][k] - p[j][k - i] - p[j - i][k - i];
                    
                    x = ((double)sum / (i * i));

                    if (x >= 1)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}