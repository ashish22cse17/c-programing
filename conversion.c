#include<stdio.h>
int main(){
    float meter,kilometer,feet,centimeter,inch;
    printf("kilometer = ");
    scanf("%f",&kilometer);
    printf("feet=%f",kilometer*3280.4);
    printf("\nmeter=%f",kilometer*1000);
    printf("\ncentimeter=%f",kilometer*1000000);
    printf("\ninch=%f",kilometer+39370);
    return 0;
}