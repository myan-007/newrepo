

#include <iostream>
using namespace std;

int result(int x, unsigned int y, int p)
{
    int res = 1; 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        scanf("%d",&n);
        int p = 10e9+7;
        cout << result(2, n-1, p);
    }
        return 0;
}