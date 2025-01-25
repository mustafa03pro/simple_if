#include<stdio.h>
void main(){
    int hour;
    printf("enter the hour: ");
    scanf("%d",&hour);
   
    if(hour<12 && hour >77 ){
        printf("good morning");
    }
    if(hour>=12 && hour<18 ){
        printf("good afternoon");
    }
    if(hour>18 && hour<23){
        printf("good evening");
    }
    if(hour>=23 || hour <7){
        printf("good night");
    }
   
}