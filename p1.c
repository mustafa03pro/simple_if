#include<stdio.h>
#include<string.h>
void main(){
    int age;
    char gen,natio[20];
    printf("enter the age,gender,nationality:     ");
    scanf("%d %c%s",&age, &gen,&natio);
    
    if(strcmp(natio,"indian")!=0){
        printf("you are not a citizen of india");
        
    }
    else if(age>=21||age>=18 && gen=='f'){
        printf("eligible to get married");
    }
    else{
        printf("not eligible to get married");
    }
   
}