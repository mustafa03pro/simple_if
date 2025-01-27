#include<stdio.h>
void main(){
    int hindi,telugu,eng,math,comp,percentage,grade;
    printf("Enter the hindi marks: ");
    scanf("%d",&hindi);
    printf("Enter the telugu marks: ");
    scanf("%d",&telugu);
    printf("Enter the eng marks: ");
    scanf("%d",&eng);
    printf("Enter the math marks: ");
    scanf("%d",&math);
    printf("Enter the comp marks: ");
    scanf("%d",&comp);
    percentage=((hindi+telugu+eng+math+comp)/5);
   
    if(percentage>=90){
        printf("%dGrade - A",percentage);
    }
    else if(percentage<90 &&percentage>75){
        printf(" Grade - B");
    }
    else if(percentage<=75 && percentage>=35){
        printf("Grade - C");
    }
    else
    puts("fail");
}