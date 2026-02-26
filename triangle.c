#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side1:");
    scanf("%d",&a);
    printf("Enter side2:");
    scanf("%d",&b);
    printf("Enter side3:");
    scanf("%d",&c);
    if(a==b&&b==c&&c==a){
          printf("Equaliteral triangle");
    }
    else if(a==b ||a==c||b==c){
        printf("Isocles triangle ");
    }
    else{
        printf("Scalene Triangle");
    }
}