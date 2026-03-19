#include <stdio.h>
int main(){
    int arr[10],i,s1=0,s2=0,n;
    printf("Enter the no of elemnts in array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            s1+=arr[i];
        }
        else{
            s2+=arr[i];
        }
    }
    printf("Sum of even numbers:%d\n",s1);
    printf("Sum of odd numbers:%d\n",s2);

}