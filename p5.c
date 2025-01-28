#include<stdio.h>
#include<string.h>
void main(){
    int pass,age;
    char class[20],eco,buss;
    printf("enetr the age: ");
    scanf("%d",&age);
    printf("enetr the class: ");
    scanf("%s",&class);
    if(pass>2030){
        if(age>=5){
        if(strcmp(class,eco)==0){
            printf("you can carry 20kg else you have to give fine of 500 Rs.oneach kg");


        }
        else if(strcmp(class,buss)==0){

            printf("you can carry 20kg else you have to give fine of 500 Rs.oneach kg");
        }


    }
    else{
        printf("they must be accompanied by an adult");
    }

    }
    
}