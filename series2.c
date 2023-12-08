#include <stdio.h>
int main()
{
    float s = 0.0;
    int n;
    printf("enter the no of term :");
    scanf("%d", &n);
    for (float i = 1.0; i <= n; i++)
    {
        s = s + i / (i+1);
    }
    printf("%.2f\n", s);
    return 0;
}