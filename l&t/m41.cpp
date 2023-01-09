#include <iostream>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld", &t);

    while (t--)
    {
        char s[3][3];
        int nx = 0, no = 0, ns = 0;
        int xw = 0, ow = 0;
        fflush(0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cin >> s[i][j];
                if (s[i][j] == 'X')
                    nx++;
                if (s[i][j] == 'O')
                    no++;
                if (s[i][j] == '_')
                    ns++;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (s[j][0] == s[j][1] and s[j][1] == s[j][2])
            {
                if (s[j][0] == 'X')
                    xw = 1;
                if (s[j][0] == 'O')
                    ow = 1;
            }
            if (s[0][j] == s[1][j] && s[1][j] == s[2][j])
            {
                if (s[0][j] == 'X')
                    xw = 1;
                if (s[0][j] == 'O')
                    ow = 1;
            }
        }
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2])
        {
            if (s[0][0] == 'X')
                xw = 1;
            if (s[0][0] == 'O')
                ow = 1;
        }
        if (s[0][2] == s[1][1] && s[1][1] == s[2][0])
        {
            if (s[0][2] == 'X')
                xw = 1;
            if (s[0][2] == 'O')
                ow = 1;
        }

        
        if (no > nx)
            std::cout << "3" << std::endl;
        else if (nx - no > 1)
            std::cout << "3" << std::endl; //invalid
        else if (ow == 1 and no == nx and xw == 0)
            std::cout << "1" << std::endl; // o wins
        else if (xw == 1 and nx > no and ow == 0)
            std::cout << "1" << std::endl; //x wins
        else if (ns == 0 and ow == 0 and xw == 0)
            std::cout << "1" << std::endl; //draw
        else if (ns != 0 and ow == 0 and xw == 0)
            std::cout << "2" << std::endl;// case2
        else std::cout << "3" << std::endl;
    }
    return 0;
}
