#include<stdio.h>
void main(){
    int item=100,costc,selling,profit,totalprofit,totalloss;
    printf("Enter the costc: ");
    scanf("%d",&costc);
    printf("Enter the selling: ");
    scanf("%d",&selling);
    totalprofit=(selling-costc)*100;
    totalloss=(costc-selling)*100;
    
    if(costc>=50 && selling==60){
        printf("The cost:%d and selling=%d",costc,selling);
        printf("The totalprofit=%d",totalprofit);
    }
    else if(costc>=50 && selling<=45){
        printf(" The cost prize = %d and sellinf prize = %d.",costc,selling);
        printf(" The totalloss = %d ",totalloss);
    }
    
}