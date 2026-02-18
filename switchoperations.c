#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Select to perform +,-,*,/:");
    scanf(" %c",&c);
    switch (c){
        case '+':
         int sum;
         sum=a+b;
         printf("Sum of two numbers:%d",sum);
         break;
        case '-':
         int diff;
         diff=a+b;
         printf("Diff of two numbers:%d",diff);
         break;
        case '*':
         int pro;
         pro=a*b;
         printf("Product of two numbers:%d",pro);
         break;
        case '/':
         int div;
         div=a/b;
         printf("Quotient of two numbers:%d",div);
         break;
        default:
        printf("Any other operation cant be performed");




    }
    return 0;


}
