#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter total no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse elements:");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}
