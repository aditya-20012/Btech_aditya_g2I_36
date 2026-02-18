#include<stdio.h>
int main(){
    float c;
    printf("Emter temperature in celsius:");
    scanf("%f",&c);
    float f=(c*(9/5))+32;
    printf("temperature in fah:%f",f);
    return 0;


}