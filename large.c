#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a= %d is greatest one", a);
        }
        else
        {
            printf("c= %d is greatest one", c);
        }
    }
    else if (b > c)
    {
        printf("b= %d is greatest one", b);
    }

    else
    {
        printf("c %d is greatest one", c);
    }

    return 0;
}
