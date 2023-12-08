#include <stdio.h>
int main()
{
    int n, k;
    printf("enter the no of row =");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        k = i;
        for (int j = 1; j < 2 * n; j++)
        {
            if (j > n - i && j < n + i)
            {
                printf("%d", k);
                if (j < n)
                {
                    k--;
                }
                else
                {
                    k++;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}