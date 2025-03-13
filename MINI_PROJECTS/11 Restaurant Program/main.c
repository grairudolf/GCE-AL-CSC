#include <stdio.h>
#include <stdlib.h>

int main(){
  int Selection[5];//Array to store selections
  int i;
  do{
    printf("\n");
    printf("Welcome to Programming Restaurant. Please select your order\n");
    printf("1 - Ashu                       (500 Fcfa)\n");
    printf("2 - Water fufu and Eru         (1000 Fcfa)\n");
    printf("3 - Fufu and Vegetable         (500 Fcfa)\n");
    printf("4 - Chicken                    (400 Fcfa)\n");
    printf("5 - Fish                       (700 Fcfa)\n");
    printf("6 - Meat                       (500 Fcfa)\n");
    printf("7 - Irish potatoes & Eggs      (600 Fcfa)\n");
    printf("8 - Accra beans and fish       (500 Fcfa)\n");
    printf("9 - Rice and Beans             (500 Fcfa)\n");
    printf("10 - Quit\n");
    printf("\n");
    printf("Please enter your selection: ");
    scanf("%d",&Selection[i]);//Value of a given selection from a person
    printf("\n");
    switch(Selection[i]){
      case 1: printf("You have ordered Ashu, this will take 15 minutes\n");
              break;
      case 2: printf("You have ordered Water fufu and Eru, this will take 12 minutes\n");
              break;
      case 3: printf("You have ordered Fufu and Vegetable, this will take 18 minutes\n");
              break;
      case 4: printf("You have ordered Chicken, this will take 5 minutes\n");
              break;
      case 5: printf("You have ordered Fish, this will take 2 minutes\n");
              break;
      case 6: printf("You have ordered Meat, this will take 1 minute\n");
              break;
      case 7: printf("You have ordered Irish potatoes & Eggs, this will take 8 minutes\n");
              break;
      case 8: printf("You have ordered Accra beans and fish, this will take 7 minutes\n");
              break;
      case 9: printf("You have ordered Rice and Beans, this will take 15 minutes\n");
              break;
      case 10: printf("Come Again!!\n");
      		  break;
    	printf("Thank you, Enjoy your meal!\n");
      default:
        printf("Wrong entry\n");//Statement for input not available on the menu
    }
  }while(Selection[i] != 10);//loop executes while the selection is not 10


  system("pause");
  return 0;
}
