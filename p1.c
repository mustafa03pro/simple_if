#include<stdio.h>
void main(){
    int side1,side2,side3;
    printf("Enter the side1: ");
    scanf("%d",&side1);
    printf("Enter the side2: ");
    scanf("%d",&side2);
    printf("Enter the side3: ");
    scanf("%d",&side3);
    if(side1==side2 && side1==side3){
        printf("The triangle is equilateral.");
    }
    else if(side1==side2 && side1!=side3){
        printf(" The triangle is isosceles.");
    }
    else if(side1!=side2 && side2!=side3 && side1!=side3){
        printf(" The triangle is scalene.");
    }
}