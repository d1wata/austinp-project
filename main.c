#include <stdio.h>

int main()
{

  int choice1;
  int choice2;
  int choice3;
  int choice4;
  int choice5;
  
  printf("Venue Options: \n1: Resorts World Manila\n2: Mall of Asia Arena\n3: Araneta Colosseum");
  printf("\nInput venue number (1-3): ");
  scanf("%d", &choice1);
  
  if(choice1 == 1){
    printf("\n\nAvailable Talent Options: \n1: Ang Huling El Bimbo\n2: Wicked");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    
    if(choice2 == 1){
      printf("\n\nAvailable Dates:\n1: August 2, 2019\n2: August 3, 2019
    }
    
  }
  else if(choice1 == 2){
    printf("\n\nAvailable Talent Options: \n1: Daniel Caesar\n2: BLACKPINK");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    
    
  }
  else if(choice1 == 3){
    printf("\n\nAvailable Talent Options: \n1: NCAA\n2: PBA");
    printf("\nInput talent number (1-2): ");
    scanf("%d", &choice2);
    
    
  }

  return 0;
}
