#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter number till which you want to perform sum");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum of numbers:%d",s);

}