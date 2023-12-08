#include <stdio.h>
int main(void) {
	// your code goes here
	int c=0;
	int a[4];
	for(int i=0;i<4;i++){
	    scanf("%d ",&a[i]);
	}
	for(int i=0;i<4;i++){
	    if(a[i]>=10)
	    c++;
	}
	printf("%d",c);
return 0;	
}

