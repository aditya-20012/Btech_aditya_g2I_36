#include<stdio.h>
int main(){
    int m1[25][25],n,lsum=0,rsum=0,i,j;
    printf("Enter dimension of matrix:");
    scanf("%d",&n);
    printf("Enter elements of matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m1[i][j]);

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",m1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        if(i==j){
            lsum=lsum+m1[i][j];
        }
        if(i==(n-1)-j){
            rsum=rsum+m1[i][j];
        }
      }

    }
    printf("Sum of left diagonal elements:%d",lsum);
    printf("Sum of right diagonal elements:%d",rsum);


}