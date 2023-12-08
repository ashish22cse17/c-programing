#include<stdio.h>
#include<string.h>
typedef struct stud{
        char name[20];
        int class;
        int roll;
    } stu;
int main(){
    stu s1,s2;
    strcpy(s1.name,"shubham kumar");
    s1.class=12;
    s1.roll=10;
    strcpy(s2.name,"kush");
    s2.class=11;
    s2.roll=2;
    printf("student name is %s\n",s1.name);
    printf("class=%d\n",s1.class);
    printf("roll no:%d\n",s1.roll);
    printf("student name is %s\n",s2.name);
    printf("class=%d\n",s2.class);
    printf("roll no:%d\n",s2.roll);
    return 0;

}