#include <stdio.h>
int main()
{
    int marks;
    printf("marks =");
    scanf("%d", &marks);
    if (marks >= 32)
    {
        printf("you are pass.\n");
        if (marks >= 91)
        {
            printf("you have got A+ Grade.\nyou are genious");
        }
        else if (marks >= 81)
        {
            printf("you have got A Grade.\n you are very good");
        }
        else if (marks >= 71)
        {
            printf("you have got B+ Grade.\n you are good");
        }
        else if (marks >= 61)
        {
            printf("you have got B Grade.\n you have to work hard");
        }
        else if (marks >= 51)
        {
            printf("you have got C+ Grade.\n you are bad in each subject");
        }
        else if (marks >= 41)
        {
            printf("you have got C Grade.\n VERY LOW MARKS");
        }
        else if (marks>=35)
        {
            printf("you are pass\n");
        }
        
    }

    else
        printf("your are fail!!! SHAME ON YOU!!!");
    return 0;
}