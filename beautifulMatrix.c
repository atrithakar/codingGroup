#include <stdio.h>
int main()
{
    int matrix[5][5];
    int a = 0, b = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] != 0 && matrix[i][j] != 1)
            {
                goto end;
            }
            
            if (matrix[i][j] == 1)
            {
                a = a + i;
                b = b + j;
            }
        }
    }
    int x = 0;
    if (a > 2)
    {
        x = x + (a - 2);
    }
    else
    {
        x = x + (2 - a);
    }
    if (b > 2)
    {
        x = x + (b - 2);
    }
    else
    {
        x = x + (2 - b);
    }
    printf("%d", x);
    end:
    return 0;
}
