#include<stdio.h>
int main(){
    int n,s=0,a=0;
    printf("Enter number to find no of digits:");
    scanf("%d",&n);
    for (;n!=0;){
        a=n%10;
        s+=1;
        n=n/10;
    }
    printf("NO of digits:%d",s);
    }