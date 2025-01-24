#include<stdio.h>
void main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    
    if(year%4==0 ){
        printf("%d year is a leap year",year);

    }
    if(year%4 !=0 ){
        printf("%d year is not a leap year",year);

    }

}