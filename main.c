#include <stdio.h>
#include <string.h>

int main()
{

  int choice1;
  int choice2;
  int choice3;
  int choice4;
  int choice5;
  int qty;
  int price;
  
  char venue[25];
  char talent[25];
  char date[25];
  char time[25];
  char acc[25];
  
  printf("Venue Options: \n1: Resorts World Manila\n2: Mall of Asia Arena\n3: Araneta Colosseum");
  printf("\nInput venue number (1-3): ");
  scanf("%d", &choice1);
  
  if(choice1 == 1){
    printf("\n\nAvailable Talent Options: \n1: Ang Huling El Bimbo\n2: Wicked");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    strcpy(venue,"Resorts World Manila");
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: August 2, 2019\n2: August 3, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"Ang Huling El Bimbo");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 10:00 AM\n2: 7:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"August 2, 2019");
      }
      else{
        printf("\n\nAvailable Time Slots:\n1: 10:00 AM\n2: 7:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"August 3, 2019");
      }
      }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"7:00 PM");
            
            if(choice5 == 1){
              price = 1000;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 2500;
              strcpy(acc,"VIP");
            }
            else{
              price = 3500;
              strcpy(acc,"VIP Deluxe");  
            }
          }
      }
    if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 29, 2019\n2: August 1, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"Wicked");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 2:00 PM\n2: 8:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 29, 2019");
      }
      else{
        printf("\n\nAvailable Time Slots:\n1: 2:00 PM\n2: 8:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"August 1, 2019");
      }
      if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"2:00 PM");
            
            if(choice5 == 1){
              price = 1000;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 2500;
              strcpy(acc,"VIP");
            }
            else{
              price = 3500;
              strcpy(acc,"VIP Deluxe");  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"8:00 PM");
            
            if(choice5 == 1){
              price = 1000;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 2500;
              strcpy(acc, "VIP");
            }
            else{
              price = 3500;
              strcpy(acc,"VIP Deluxe");  
            }
          }
      }
  
  else if(choice1 == 2){
    printf("\n\nAvailable Talent Options: \n1: Daniel Caesar\n2: BLACKPINK");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    strcpy(venue,"Mall of Asia Arena");
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: July 23, 2019\n2: July 24, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"Daniel Caesar");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM\n2: 7:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 23, 2019");
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM\n2: 7:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 24, 2019");
      }
        
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"11:00 AM");
            
            if(choice5 == 1){
              price = 2500;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 3500;
              strcpy(acc,"VIP");
            }
            else{
              price = 5000;
              strcpy(acc,"VIP Deluxe");  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"7:30 PM");
            
            if(choice5 == 1){
              price = 2500;
              strcpy(acc,"Gen Ad");
            }
            else if(choice5 == 2){
              price = 3500;
              strcpy(acc,"Upper Box");
            }
            else{
              price = 5000;
              strcpy(acc,"VIP");  
            }
          }      
    }
    else if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 1, 2019\n2: July 2, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"BLACKPINK");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 6:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 1, 2019");
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 6:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 2, 2019");
      }
        
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"6:30 PM");
            
            if(choice5 == 1){
              price = 2500;
              strcpy(acc,"Gen Ad");
            }
            else if(choice5 == 2){
              price = 3500;
              strcpy(acc,"Upper Box");
            }
            else{
              price = 5000;
              strcpy(acc,"VIP");  
            }

          }
  }
  
  else if(choice1 == 3){
    printf("\n\nAvailable Talent Options: \n1: NCAA\n2: PBA");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    strcpy(venue,"Araneta Colosseum");
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: July 13, 2019\n2: July 16, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"NCAA");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 13, 2019");
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 16, 2019");
      }
    }
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"11:00 AM");
            
            if(choice5 == 1){
              price = 300;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 500;
              strcpy(acc,"Middle Bench");
            }
            else{
              price = 1000;
              strcpy(acc,"Courtside");  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"11:00 AM");
            
             if(choice5 == 1){
              price = 300;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 500;
              strcpy(acc,"Middle Bench");
            }
            else{
              price = 1000;
              strcpy(acc,"Courtside");  
            }
          }      
    } 
    else if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 10, 2019\n2: July 15, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      strcpy(talent,"PBA");
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 10:45 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 10, 2019");
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 10:45 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        strcpy(date,"July 15, 2019");
      }
    }
        
    if(choice4 == 1){
           printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            strcpy(time,"11:00 AM");
            
             if(choice5 == 1){
              price = 300;
              strcpy(acc,"Balcony");
            }
            else if(choice5 == 2){
              price = 500;
              strcpy(acc,"Middle Bench");
            }
            else{
              price = 1000;
              strcpy(acc,"Courtside");  
            }
          }
    
    
  }
      
      printf("SUMMARY\nVenue: %s", venue);
      printf("\nTalent: %s", talent);
      printf("\nDate: %s", date);
      printf("\nTime: %s", time);
      printf("\nPrice per ticket: %d", price);
      printf("\nInput quantity of ticket order: ");
      scanf("%d", &qty);
      choice1 = price * qty;
      printf("\nFinal Price: PhP %d", choice1);
  

  return 0;
}
    
    

