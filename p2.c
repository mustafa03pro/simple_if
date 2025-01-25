#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("enter the num1: ");
    scanf("%d",&num1);
    printf("enter the num1: ");
    scanf("%d",&num2);
    printf("enter the num1: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("num1 is grateer %d",num1);
    }
    if(num2>num1 && num2>num3){
        printf("num2 is grateer %d",num2);
    }
    else{
         printf("num3 is grateer %d",num3);
    }
}