// IN THIS FIBONACCI SERIES ONE MORE TERM WILL BE PRINTED BECAUSE OF DO-EHILE LOOP
#include <stdio.h>
int main()
{
    int n, f1 = 0, f2 = 1, f3 = 1, f4;
    printf("enter the value of n =");
    scanf("%d", &n);
    printf("%d,", f1);
    printf("%d,", f2);
    printf("%d,", f3);
    do
    {
        f4 = f2 + f3;
        printf("%d,", f4);
        f2 = f3;
        f3 = f4;
    } while (f4 < n);

    return 0;
}