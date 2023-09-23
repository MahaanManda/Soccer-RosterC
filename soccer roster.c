#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   const int elements = 5;
   int jerseyNum[elements];
   int ratingNum[elements];
   char menu[] = {'u', 'a', 'r', 'o', 'q'};
   bool isQuit = false;
   char userInputMenu;
   int tempJerseyNum;
   int tempRatingNum;
   
   int i = 0;
   
   // get user input
   while (i < 5) {
      printf("Enter player %d's jersey number:\n", i+1);
      scanf("%d", &jerseyNum[i]);
      printf("Enter player %d's rating:\n\n", i+1);
      scanf("%d", &ratingNum[i]);
      i = i + 1;
      }
   
   // check values correct
   //for (i = 0; i < elements; ++i) {
      //printf("%d", jerseyNum[i]);
      //printf("%d", ratingNum[i]);
      //}
   
   // output roster
   printf("ROSTER\n");
   for (i = 0; i < elements; ++i) {
      printf("Player %d -- Jersey number: %d, Rating: %d\n" , i+1, jerseyNum[i], ratingNum[i]);
      }
      
   printf("\nMENU\n");
   
   //  Implement a menu of options for a user to modify the roster
   //print the menu options vertically
   
   for (i = 0; i < 5; ++i) {
      printf("%c - " , menu[i]);
      if (i == 0) {
         printf("Update player rating\n");
         }
      else if (i == 1) {
         printf("Output players above a rating\n");
         }
      else if (i == 2) {
         printf("Replace player\n");
         }
      else if (i == 2) {
         printf("Replace player\n");
         }
      else if (i == 3) {
         printf("Output roster\n");
         }
      else if (i == 4) {
         printf("Quit\n\n");
         }   
      }
   
   printf("Choose an option:\n");
   // checking user input and outputting option user selects
   while (isQuit != true) {
      scanf("%c", &userInputMenu);
      //if output roster option selected
      if (userInputMenu == 'o') {
         printf("ROSTER\n");
         for (i = 0; i < elements; ++i) {
            printf("Player %d -- Jersey number: %d, Rating: %d\n" , i+1, jerseyNum[i], ratingNum[i]);
            
            }
            printf("Choose an option:\n");
         }
      // if quit option is selected
      else if (userInputMenu == 'q') {
         isQuit = true;
         break;
         }
      // if update rating is selected
      else if (userInputMenu == 'u') {
         printf("Enter a jersey number:\n");
         scanf("%d", &tempJerseyNum);
         printf("Enter a new rating for player:\n");
         scanf("%d", &tempRatingNum);
         //replacing value
         if (tempJerseyNum == jerseyNum[0]) {
            ratingNum[0] = tempRatingNum;
            }
         if (tempJerseyNum == jerseyNum[1]) {
            ratingNum[1] = tempRatingNum;
            }
         if (tempJerseyNum == jerseyNum[2]) {
            ratingNum[2] = tempRatingNum;
            }
         if (tempJerseyNum == jerseyNum[3]) {
            ratingNum[3] = tempRatingNum;
            }
         if (tempJerseyNum == jerseyNum[4]) {
            ratingNum[4] = tempRatingNum;
            }
        printf("Choose an option:\n");
         }
      //above a rating option
      else if (userInputMenu == 'a') {
         printf("Enter a rating:\n");
         scanf("%d", &tempRatingNum);
         printf("ABOVE %d\n", tempRatingNum);
         for (i = 0; i < 5; ++i) {
            if (ratingNum[i] > tempRatingNum) {
               printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], ratingNum[i]);
               }
            }
        printf("Choose an option:\n");
         }
      //replace option (jersey number and rating)
      else if (userInputMenu == 'r') {
         printf("Enter a jersey number:\n");
         scanf("%d", &tempJerseyNum);
         for (i = 0; i < 5; ++i) {
            if (jerseyNum[i] == tempJerseyNum) {
               printf("Enter a new jersey number:\n");
               scanf("%d", &jerseyNum[i]);
               printf("Enter a rating for the new player:\n");
               scanf("%d", &ratingNum[i]);
               
               }
            }
        printf("Choose an option:\n");
         }
      }
   
   return 0;
}