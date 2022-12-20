#include <stdio.h>
#include <conio.h>
int main()
{   
    printf("Welcome to matrix multiplier program.\n1. First you need to enter sizes of two matrices.\n2. To enter size enter the numnbers of row and then put a space and then enter number of columns.\n3. When you are done, press enter repeat same steps for entering size of another matrix.\n4. Once you are done entering sizes of two matrices, press enter. The program will ask you the value for the elements of matrices.\n5. Enter values and press enter.\n");
    int a, b, c, d;
    printf("\nEnter size of matrix1 (a X b): ");
    scanf("%d %d", &a, &b);
    printf("\nEnter size of matrix2 (c X d): ");
    scanf("%d %d", &c, &d);
    if (b == c)
    {
        int m1[a][b], m2[c][d], ans[a][d], sum;
        printf("For matrix 1:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter value of element %d%d: ", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
            }
        }
        printf("For matrix 2:\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("Enter value of element %d%d: ", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                sum = 0;
                for (int k = 0; k < c; k++)
                {
                    sum = sum + m1[i][k] * m2[k][j];
                }
                ans[i][j] = sum;
            }
        }
        printf("\n");
        printf("Matrix 1:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%3d", m1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Matrix 2:\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%3d", m2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Resultant matrix:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%3d", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("For your given data two matrices can't be multiplied.");
    }
    printf("\nPress any key to exit.");
    getch();
    return 0;
}
