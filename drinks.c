#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n>=1 && n<=100)
    {
        int p;
        float ans = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p);
            ans = ans + p;
        }
        ans = ans/n;
        printf("%f", ans);
        
 
    }
    
    return 0;
}
