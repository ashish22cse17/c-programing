#include<stdio.h>
int main(){
    char name ='a';
    char *ptr;
    ptr=&name;
    printf("%d\n",ptr);
    printf("%c\n",*ptr);
    return 0;
}