// 3)
// Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. 
// The program will print the winner’s name and also print by how many 

// points that person won by comparing the scores. Develop this program by using Control flow Statements
#include<stdio.h>
#include<string.h>
void main(){
    int score1,score2;
    char player1[20],player2[20];
    printf("enter the name:     ");
    scanf("%s",&player1);
    printf("enter the score:     ");
    scanf("%d",&score1);
    printf("enter the name2:     ");
    scanf("%s",&player2);
    printf("enter the score2:     ");
    scanf("%d",&score2);
    
    if(score1>score2){
        printf("player1 has more score=%d ",score1-score2);
        
    }
    else if(score2>score1){
        printf("player2 has more score=%d",score2-score1);
    }
    else{
        printf("invalid score");
    }
   
}