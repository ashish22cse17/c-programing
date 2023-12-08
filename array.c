#include <stdio.h>
int main()
{
    int n, i;
    float marks[n];
    char name[n];
    printf("no of student = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("enter roll no. %d NAME=", i);
        scanf("%s", &name[n]);
        printf("\nenter roll no. %d MARKS=", i);
        scanf("%f", &marks[n]);
    }
    
        printf("enter roll no to view result=");
        scanf("%d", &i);
    //if (i<=n)
        printf("Roll %d Name %s marks %f", i, name[n], marks[n]);

    //else
    //    printf("their is no student of this roll no");

    return 0;
}