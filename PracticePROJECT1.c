// Project 1- GUESS THE NUMBER!
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
printf("****GUESS THE NUMBER - THE GAME**** \n \n");
int number,gnum,nguess=1;
srand(time(0));
number = rand()%100 + 1; //to get a random number from 1-100
do
{
 printf("System has generated a no. what number could it be?\n"); //take the guessno.
 scanf("%d",&gnum);
 if (gnum<number)
 {
    printf("No,it's bigger than this :-(\n\n"); //if the number is greater than the guess num
    printf("Try again -_-\n");
 }
 else if (gnum>number) // if the number is smaller than the guess num
 {
    printf("NO,it's smaller than this :-(\n\n");
    printf("go ahead, try again!\n");
 }
 else //if the number is exactly the guess no.
 {
     printf("perfect guess!! %d is the right number and it took you %d guesses to be right\n\n",number,nguess);
     
 }
nguess++; //to update the no. of attempts everytime you attempt it!
} while (gnum!=number);

return 0;
}