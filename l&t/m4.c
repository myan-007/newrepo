#include <stdio.h>
void convert(char s[4][4], int ar[4][4], int *nx, int *no, int *nsp)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == 'X')
            {
                ar[i][j] = 1;
                ++(*nx);
            }
            else
            {
                if (s[i][j] == 'O')
                {
                    ar[i][j] = -1;
                    ++(*no);
                }
                else
                {
                    ar[i][j] = 0;
                    ++(*nsp);
                }
            }
        }
    }
}
// void check1(int a[4][4], int *xwin, int *owin)
// {
//     int hsum = 0, vsum = 0, dsum1 = 0, dsum2 = 0, i = 2, j;
//     for (j = 0; j < 3; j++)
//     {
//         dsum1 += a[j][j];
//         dsum2 += a[j][i];
//         i--;
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             hsum += a[i][j];
//             vsum += a[j][i];
//         }
//         if (hsum == 3 || vsum == 3 || dsum1 == 3 || dsum2 == 3)
//         {
//             ++(*xwin);
//         }
//         if (hsum == -3 || vsum == -3 || dsum1 == -3 || dsum2 == -3)
//         {
//             ++(*owin);
//         }
//         if (*xwin == *owin)
//             break;
//         hsum = 0;
//         vsum = 0;
//     }
// }
int main()
{
    long long int t;
    scanf("%lld", &t);

    while (t--)
    {
        char s[4][4];
        int ar[4][4];
        int x = 0, o = 0, sp = 0;
        int xwin=0, owin=0;
        fflush(0);
        for (int i = 0; i < 3; i++)
        {
            scanf("%s", s[i]);
        }
        convert(s, ar, &x, &o, &sp);
        int hsum = 0, vsum = 0, dsum1 = 0, dsum2 = 0, i = 2, j;
        for (j = 0; j < 3; j++)
        {
            dsum1 += ar[j][j];
            dsum2 += ar[j][i];
            i--;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                hsum += ar[i][j];
                vsum += ar[j][i];
            }
            if (hsum == 3 || vsum == 3 || dsum1 == 3 || dsum2 == 3)
            {
                xwin = 1;
            }
            if (hsum == -3 || vsum == -3 || dsum1 == -3 || dsum2 == -3)
            {
                owin = 1;
            }
            if (xwin == owin)
                {break;}
            hsum = 0;
            vsum = 0;
        }
        if (xwin ==1 && owin == 1)
        {
            printf("3\n");
        }
        else if (xwin == 1 && x > o || owin == 1 && x == o)
        {
            printf("1\n");
        }
        else if(sp==0 && xwin==0 && owin == 0)
        {
            printf("1\n");
        }
        else if (xwin == 0 && owin == 0 && sp != 0)
        {
            printf("2\n");
        }
        else
            printf("3\n");
    }

    return 0;
}
