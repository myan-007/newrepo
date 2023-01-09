#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        if (i <= 5)
        {
            for (int s = 3; s + 2 > i; s--)
            {
                printf(" ");
            }

            for (int j = 1; j <= i; j++)
            {
                if (j > 2 && i == 3)
                {
                    printf("%d ", j - 2);
                }
                else
                {
                    if (j > 3 && i == 5 && j != 5)
                    {
                        printf("%d ", j - 2);
                    }
                    else if (j == 5)
                    {
                        printf("%d", j - 4);
                    }
                    else
                    {
                        printf("%d ", j);
                    }
                }
            }
            printf("\n");
        }
        else
        {
            for (int s = 5; s < i; s++)
            {
                printf(" ");
            }
            if (i == 7)
            {
                for (int j = 1; j <= i - 4; j++)
                {
                    if (i == 7 && j > 2)
                        printf("%d ", j - 2);
                    
                    else
                    {
                        printf("%d ", j);
                    }
                }
                printf("\n");
            }
            else
            {
                for (int j = 1; j <= i - 8; j++)
                {

                    printf("%d ", j);
                }
                printf("\n");
            }
        }
        
    }
    return 0;
}

    //     1
    //   1 2 1
    // 1 2 3 2 1
    //   1 2 1
    //     1