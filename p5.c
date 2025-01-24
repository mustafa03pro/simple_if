
// 5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
// Test Data : 21
// Expected Output :
// Congratulation! You are eligible for casting your vote.
#include<stdio.h>
void main(){
    int age;
    printf("enter the num: ");
    scanf("%d",&age);
    
    if(age>=18){
        printf("you are eligiable for vote");

    }
    if(age<=18){
        printf("you are not eligiable for vote");

    }

}