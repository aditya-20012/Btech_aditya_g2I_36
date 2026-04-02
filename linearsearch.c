#include<stdio.h>
int main(){
    int arr[10],i,a,n,b,f=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter element to be searched:");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(arr[i]==b){
            printf("Element found at %d",i);
            f=1;
            break;
        }
   
    }
    if(f==0){
        printf("Element not found");
    }

}

            
        

