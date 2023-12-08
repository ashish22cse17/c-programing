#include <stdio.h>
int main()
{
    int i, j, t, a[25], n;
    printf("enter the size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the value");
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        t = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > t)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    printf("shorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}