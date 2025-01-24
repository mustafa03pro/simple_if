// 8. Write a C program to find the largest of three numbers.
// Test Data : 12 25 52
// Expected Output :
// 1st Number = 12,        2nd Number = 25,        3rd Number = 52
// The 3rd Number is the greatest among three
#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("enter the num: ");
    scanf("%d",&num1);
    printf("enter the num: ");
    scanf("%d",&num2);
    printf("enter the num: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("num1 is gratter=%d",num1);

    }
    if(num2>num1 && num2>num3){
        printf("num2 is gratter=%d",num2);

    }
    if(num3>num1 &&num3>num2){
        printf("num3 is gratter=%d",num3);

    }

}