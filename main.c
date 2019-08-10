#include <stdio.h>

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
  char date[20];
  char time[15];
  char acc[15];
  
  printf("Venue Options: \n1: Resorts World Manila\n2: Mall of Asia Arena\n3: Araneta Colosseum");
  printf("\nInput venue number (1-3): ");
  scanf("%d", &choice1);
  
  if(choice1 == 1){
    printf("\n\nAvailable Talent Options: \n1: Ang Huling El Bimbo\n2: Wicked");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    venue = "Resorts World Manila";
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: August 2, 2019\n2: August 3, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "Ang Huling El Bimbo";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 10:00 AM\n2: 7:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "August 2, 2019";
      else{
        printf("\n\nAvailable Time Slots:\n1: 10:00 AM\n2: 7:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "August 3, 2019";
      }
        
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "7:00 PM";
            
            if(choice5 == 1){
              price = 1000;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 2500;
              acc = "VIP";
            }
            else{
              price = 3500;
              acc = "VIP Deluxe";  
            }
          }
      }
    }
    
    else if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 29, 2019\n2: August 1, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "Wicked";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 2:00 PM\n2: 8:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 29, 2019";
      else{
        printf("\n\nAvailable Time Slots:\n1: 2:00 PM\n2: 8:00 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "August 1, 2019";
      }
      if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "2:00 PM";
            
            if(choice5 == 1){
              price = 1000;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 2500;
              acc = "VIP";
            }
            else{
              price = 3500;
              acc = "VIP Deluxe";  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 1000\n2: VIP - PhP 2500\n3: VIP Deluxe - PhP 3500");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "8:00 PM";
            
            if(choice5 == 1){
              price = 1000;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 2500;
              acc = "VIP";
            }
            else{
              price = 3500;
              acc = "VIP Deluxe";  
            }
          }
      }
  
  else if(choice1 == 2){
    printf("\n\nAvailable Talent Options: \n1: Daniel Caesar\n2: BLACKPINK");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    venue = "Mall of Asia Arena";
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: July 23, 2019\n2: July 24, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "Daniel Caesar";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM\n2: 7:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 23, 2019";
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM\n2: 7:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 24, 2019";
      }
        
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "11:00 AM";
            
            if(choice5 == 1){
              price = 2500;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 3500;
              acc = "VIP";
            }
            else{
              price = 5000;
              acc = "VIP Deluxe";  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "7:30 PM";
            
            if(choice5 == 1){
              price = 2500;
              acc = "Gen Ad";
            }
            else if(choice5 == 2){
              price = 3500;
              acc = "Upper Box";
            }
            else{
              price = 5000;
              acc = "VIP";  
            }
          }      
        
    else if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 1, 2019\n2: July 2, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "BLACKPINK";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 6:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 1, 2019";
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 6:30 PM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 2, 2019";
      }
        
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Gen Ad - PhP 2500\n2: Upper box - PhP 3500\n3: VIP - PhP 5000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "6:30 PM";
            
            if(choice5 == 1){
              price = 2500;
              acc = "Gen Ad";
            }
            else if(choice5 == 2){
              price = 3500;
              acc = "Upper Box";
            }
            else{
              price = 5000;
              acc = "VIP";  
            }

          }
  }
  
  else if(choice1 == 3){
    printf("\n\nAvailable Talent Options: \n1: NCAA\n2: PBA");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    venue = "Araneta Colosseum";
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: July 13, 2019\n2: July 16, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "NCAA";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 13, 2019";
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 11:00 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 16, 2019";
      }
        
    if(choice4 == 1){
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "11:00 AM";
            
            if(choice5 == 1){
              price = 300;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 500;
              acc = "Middle Bench";
            }
            else{
              price = 1000;
              acc = "Courtside";  
            }

          }
          else{
            printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "11:00 AM";
            
             if(choice5 == 1){
              price = 300;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 500;
              acc = "Middle Bench";
            }
            else{
              price = 1000;
              acc = "Courtside";  
            }
          }      
        
    else if(choice2 == 2){
      printf("\n\nAvailable Dates:\n1: July 10, 2019\n2: July 15, 2019");
      printf("\nInput date number (1-2): ");
      scanf("%d", &choice3);
      talent = "PBA";
      
      if(choice3 == 1){
        printf("\n\nAvailable Time Slots:\n1: 10:45 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 10, 2019";
      }
      else {
        printf("\n\nAvailable Time Slots:\n1: 10:45 AM");
        printf("\nInput time slot number: ");
        scanf("%d", &choice4);
        date = "July 15, 2019";
      }
        
    if(choice4 == 1){
           printf("\n\nAvailable Seat Choices:\n1: Balcony - PhP 300\n2: Middle Bench - PhP 500\n3: Courtside - PhP 1000");
            printf("\nInput seat choice number: ");
            scanf("%d", &choice5);
            time = "11:00 AM";
            
             if(choice5 == 1){
              price = 300;
              acc = "Balcony";
            }
            else if(choice5 == 2){
              price = 500;
              acc = "Middle Bench";
            }
            else{
              price = 1000;
              acc = "Courtside";  
            }    
          }
    
    
  }
      
      printf("SUMMARY\nVenue: %s", venue);
      printf("\nTalent: %s", talent);
      printf("\nDate: %s", date);
      printf("\nTime: %s", time);
      printf("\nPrice per ticket: %s", price);
      printf("\nInput quantity of ticket order: ");
      scanf("%d", qty);
      choice1 = price*qty;
      printf("\nFinal Price: PhP %d", choice1);
  

  return 0;
}
