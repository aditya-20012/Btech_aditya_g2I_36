#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>0 &&age<=12){
        printf("Child");

    }
    else if(age>13 && age<=17){
        printf("Teen");

    }
    else if(age>17 && age<=60){
        printf("Adult");

    }
    else if(age>60){
        printf("Senior citizen");
    }
       
}