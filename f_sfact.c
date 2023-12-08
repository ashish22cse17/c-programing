#include <stdio.h>
int sfact();

int main()
{
    printf("sum of n factorial is %d\n", sfact());
}
int sfact()
{
    int n, s = 0, f;
    printf("n=");
    scanf("%d", &n);
    for (int x = n; x >= 1; x--)
    {
        int f = 1;
        for (int i = x; i >= 1; i--)
        {

            f = f * i;
        }
        s = s + f;
    }
    return s;
}
