#include <stdio.h> 
#include<stdlib.h>
#include <time.h> 


 
int main() { 




/*
TASK1:

Write a program that uses nested loops to output all 
theoretically possible game results in basketball to the 
console. A team gets either 2 or 3 points for a basket. We
assume that each team scores a maximum of 99 points in 
a game
*/


      //Comment open for task 1



   //Declaring a variable to hold score of one team
    int score = 0;
    int scoreBoard = 0;
    
   
//Since there was no instruction on where we get input for the chosen 'basket' at an instance 
//we choose to make it authonomously random
    srand(time(0)); 


//Ensuring that the game doesnt go on after 99 Score mark IN THE FIRST LOOP
    //Ensuring that score does not conflict with scoreline and Switching the basket values in the second loop
    while(scoreBoard < 100)// fIRST LOOP(While Loop)
    {

        do                  //NESTED do...while loop
        {
            int basket = rand() % (3 + 0 - 1) + 2;      // Basket must be a 2 or 3
            scoreBoard = score;
            int scoreLine = scoreBoard;





            // When basket is 2, increment score by two
            switch (basket)                     
            {
            case 2:                                             
                score = score +2;
                printf(" WELLDONE! +2 ScoreLine: %d\n", scoreLine);
                       
                break;
            // when basket is 3, increment score by 3 and print on the console
            case 3:
                score = score +3; 
                printf(" SHOT!! +3 ScoreLine: %d\n", scoreLine);        
                break;
           
            }
        } while (score < 100);
        

        //score = score + basket;
        

    scoreBoard++;

    //printf("%d ScoreLine: \n", scoreLine);            

    
    
    

    }
    printf("\nGame Over!");

      // Comment close for task 1




    
 


 
    return 0; 
} 