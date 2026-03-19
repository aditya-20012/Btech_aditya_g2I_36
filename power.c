#include<stdio.h>
int main(){
    int e,b,power=1;
    printf("Enter base:");
    scanf("%d",&b);
    printf("Enter exponent:");
    scanf("%d",&e);
    for(int i=1;i<=e;i++){
        power=power*b;
    }
    printf("%d",power);
}