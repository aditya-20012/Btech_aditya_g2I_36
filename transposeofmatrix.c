#include<stdio.h>
#include<conio.h>
int main(){
    int m1[25][25],row,cal,m2[25][25],i,j;
    printf("Enter the rows:\n");
    scanf("%d",&row);
    printf("Enter the columns:\n");
    scanf("%d",&cal);
    printf("Enter elements of matrix\n");
    for( i=0;i<row;i++){
        for( j=0;j<cal;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("print elements of matrix\n");
    for(i=0;i<cal;i++){
        for(j=0;j<cal;j++){
            printf("%d",m1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<cal;j++){
            m2[j][i]=m1[i][j];
        }
    }
    printf("Transpose of matrix\n");
    for(i=0;i<cal;i++){
        for(j=0;j<row;j++){
            printf("%d",m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}