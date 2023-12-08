#include<stdio.h>
int main(){
    float km, cm, feet, inch, meter;
    printf("Enter distance in kilometer=");
    scanf("%f",&km);
    cm=km*100000;
    feet=km*3280.84;
    inch=km*3370.079;
    meter=km*1000;
    printf("%f km = %f cm\a",km,cm);
    printf("\n%f km = %f inchs\a",km,inch);
    printf("\n%f km = %f foot\a",km,feet);
    printf("\n%f km = %f meters\a",km,meter);
    return 0;
}