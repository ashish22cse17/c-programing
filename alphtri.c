#include<stdio.h>
int main(){
    char alpha;
    printf("enter alpha=");
    scanf("%ch",&alpha);
    if(alpha==65||alpha==69||alpha==73||alpha==79||alpha==85||alpha==97||alpha==101||alpha==105||alpha==112||alpha==117)
    printf("%c is vowel",alpha);
    else
    printf("it is not vowel\n");
    return 0;
}