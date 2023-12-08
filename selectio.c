#include <stdio.h>
int main()
{
    int i, j, min, a[25], n, po, t;
    printf("no of element:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter value:");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        po = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                po = j;
            }
        }
        t = a[i];
        a[i] = a[po];
        a[po] = t;
    }

    printf("shorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}