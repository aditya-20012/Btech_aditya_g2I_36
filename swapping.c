#include<stdio.h>
int main(){
    int p,q,r;
    printf("Enter number 1:");
    scanf("%d",&p);
    printf("Enter number 2:");
    scanf("%d",&q);
    r=p;
    p=q;
    q=r;
    printf("After swapping:\n");
    printf("Number1:%d\n",p);
    printf("Number2:%d\n",q);
    
}