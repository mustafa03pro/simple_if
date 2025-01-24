
// 7.  Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
// Test Data :
// Input the Roll Number of the student :784
// Input the Name of the Student :James
// Input the marks of Physics, Chemistry and  Computer Application : 70 80 90
// Expected Output :
// Roll No : 784
// Name of Student : James
// Marks in Physics : 70
// Marks in Chemistry : 80
// Marks in Computer Application : 90
// Total Marks = 240
// Percentage = 80.00
// Division = First
#include<stdio.h>
void main(){
    char name;
    int rollno,math,sci,eng,total_marks;
    float percentage;
    printf("enter the rollno: ");
    scanf("%d",&rollno);
    printf("enter the name: ");
    scanf("%s",&name);
    printf("enter the marks in math: ");
    scanf("%d",&math);
    printf("enter the sci: ");
    scanf("%d",&sci);
    printf("enter the eng: ");
    scanf("%d",&eng);
    total_marks=(math+sci+eng);
    printf("total marks=%d\n",total_marks);
    percentage=total_marks/3;
    printf("percentage=%2.f\n",percentage);
    if(percentage>=90){
        printf("grade=first");

    }
    if(percentage>=75){
        printf("grade=second");

    }
    if(percentage<75){
        printf("grade=third");

    }
    if(percentage<40){
        printf("grade=fail");

    }

}