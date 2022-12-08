#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 100)
    {
        int arr[n][3], x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
            if (-100 <= arr[i][0] && arr[i][0] <= 100 && -100 <= arr[i][1] && arr[i][1] <= 100 && -100 <= arr[i][2] && arr[i][2] <= 100)
            {
            }
            else
            {
                goto end;
            }
        }

        for (int i = 0; i < n; i++)
        {
            x = x + arr[i][0];
            y = y + arr[i][1];
            z = z + arr[i][2];
        }
        if (x == 0 && y == 0 && z == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
end:
    return 0;
}
