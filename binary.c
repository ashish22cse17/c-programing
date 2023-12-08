#include<stdio.h>
int main(){
    int  i,num,pos=-1,mid,beg=0,n,end;
    int a[100];
    printf("size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    printf("enter no. you want to search:");
    scanf("%d",&num);
    end = n-1;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==num)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<num)
        beg=mid+1;
        else
        end=mid-1;
    }
    if(pos==-1)
    printf("no. is not present");
    else
    printf("%d is found at position %d\n",num,pos+1);
    return 0;
}