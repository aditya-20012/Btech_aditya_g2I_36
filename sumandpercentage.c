#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,s;
    printf("Enter marks of english:");
    scanf("%d",&m1);
    printf("Enter marks of maths:");
    scanf("%d",&m2);
    printf("Enter marks of science:");
    scanf("%d",&m3);
    printf("Enter marks of social science:");
    scanf("%d",&m4);
    printf("Enter marks of ai:");
    scanf("%d",&m5);
    s=m1+m2+m3+m4+m5;
    float percentage=(s*100)/500;
    printf("Sum of all subjects:%d",s);
    printf("\nPercentage =%f",percentage);

}