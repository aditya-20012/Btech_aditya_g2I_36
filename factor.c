#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter number to find factors:");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
}