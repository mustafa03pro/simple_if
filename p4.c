#include<stdio.h>
void main(){
    int tyres,age,issue,bill,tyreCount;
    printf("Enter the wheele type 2 wheeler:\nEnter the wheele type 3 wheeler: \nEnter the wheele type 4 wheeler:\n");
    scanf("%d",&tyres);
    if(tyres==2||tyres==3||tyres==4){
        printf("what is the age of your vehicle: ");
        scanf("%d",&age);
        
    }
    if(age<=8){
            puts("your vehicle is ready to servicesing");

        }
    else printf("your vehicle is not completed 8 months");
     
     
    printf("\nSelect the issue with your vehicle:\n");
    printf("1) Tyre Problem\n");
    printf("2) Fuel Problem\n");
    printf("3) Engine Issue\n");
    printf("4) General Services\n");
    printf("Enter your choice: ");
    scanf("%d", &issue);
     if (issue == 1) {
        printf("How many tyres are you facing an issue with? ");
        scanf("%d", &tyreCount);
        bill = tyreCount * 400;
        printf("\n--- Bill Details ---\n");
        
        printf("Issue: Tyre Problem\n");
        printf("Bill: Rs. %d\n", bill);
    } else if (issue == 2) {
        bill = 1500;
        printf("\n--- Bill Details ---\n");
        
        printf("Issue: Fuel Problem\n");
        printf("Bill: Rs. %d\n", bill);
    } else if (issue == 3) {
        bill = 5000;
        printf("\n--- Bill Details ---\n");
        
        
        printf("Issue: Engine Issue\n");
        printf("Bill: Rs. %d\n", bill);
    } else if (issue == 4) {
        bill = 1000;
        printf("\n--- Bill Details ---\n");
        
        printf("Issue: General Services\n");
        printf("Bill: Rs. %d\n", bill);
    } else {
        printf("Invalid option selected.\n");
    }

    
}




    
