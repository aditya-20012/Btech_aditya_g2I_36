#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,s;
    printf("Enter marks of subject1:");
    scanf("%d",&m1);
    printf("Enter marks of subject2:");
    scanf("%d",&m2);
    printf("Enter marks of subject3:");
    scanf("%d",&m3);
    printf("Enter marks of subject4:");
    scanf("%d",&m4);
    printf("Enter marks of subject5:");
    scanf("%d",&m5);
    s=m1+m2+m3+m4+m5;
    float p=(s*100)/500;
    if (p>=90 && p<=100){
        printf ("A grade");

    }else if (p>=80 && p<90){
        printf("B grade");

    }else if (p>=60 && p<80){
        printf(" C grade");

    }else{
        printf("D grade");

    }
    return 0;
}