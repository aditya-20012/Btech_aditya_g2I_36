#include<stdio.h>
int main(){
    int a[100],b[100],n,i,s[100];
    printf("Enter total no of elements for array:");
    scanf("%d",&n);
    printf("Array 1 elements\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);

    }
    printf("Array 2 elements\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=n-1;i++){
        s[i]=a[i]+b[i];
    }
    printf("Sum of both array:");
    for(i=0;i<=n-1;i++){
        printf("%d\n",s[i]);
    }


    
    

}