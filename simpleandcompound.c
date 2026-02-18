#include<stdio.h>
#include<stdio.h>

int main(){
    float p,t,r;
    printf("Enter prinicple:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    printf("Simple interest:%f",si);
    float a=p*pow((1+r/100),t);
    float ci=a-p;
    printf("\nCompound interest:%f",ci);
    return 0;
   
    
    
    
}