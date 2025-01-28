#include<stdio.h>
#include<string.h>
int main(){
    int select,qty,t_amount,total=0,c_amount,cc_amount,amount,ret;
    
    printf("Menu\n");
    printf("1)tea=10\n");
    printf("2)coffee=15\n");
    printf("3)cold coffee=20\n");

    printf("select the option: ");
    scanf("%d",&select);
    printf("select the qty: ");
    scanf("%d",&qty);
    t_amount=10;
    c_amount=15;
    cc_amount=20;
    
    
    
    
    if(select==1&&qty>1){
        printf("tea=10\nqty=%d\ntotal=%d\n",qty,total=qty*t_amount);
        
    }
    else if(select==2&&qty>1){
        printf("coffee=15\nqty=%d\ntotal=%d\n",qty,total=qty*c_amount);
    }
    else if(select==3&&qty*20){
        printf("cold coffee=12\nqty=%d\ntotal=%d\n",qty,total=qty*cc_amount);
    }
    else{
        printf("invalid input");
    }
    printf("enter the amount: ");
    scanf("%d",&amount);
    

    if(amount>total){
        ret=amount-total;
        printf("given amount %d\n and return %d\n",amount,ret);
    }
    else{
        printf("more money");
        
    }
    return 0;
   
}