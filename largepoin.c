#include<stdio.h>
int large(int *a,int *b,int *c){
    if(*a>*b){
        if(*a>*c)
        return *a;
        else
        return *c;
    }
    else{
        if (*b>*c)
        return *b;
        else
        return *c;    
    }
}
    int main(){
        int a,b,c,lar;
        scanf("%d %d %d",&a,&b,&c);
        lar=large(&a,&b,&c);
        printf("large =%d",lar);
        return 0;
    }
