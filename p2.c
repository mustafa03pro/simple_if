// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department
#include<stdio.h>

void main(){
    int id;
    
    printf("enter the id: ");
    scanf("%d",&id);
    
    if(id>=11&&id<=15){
        printf("software department");
        
    }
    else if(id>=16&&id<=21){
        printf("developer department");
    }
    else if(id>=22&&id<=26){
        printf("testing department");
    }
   
}