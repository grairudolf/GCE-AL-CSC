#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
  printf("How old are you: ");
  scanf("%d", &age);
  if (age <=3 && age<16){
      printf("You don't need diapers");
  }
      else if (age>=16){
            printf("You can drive ");
      }
        else if(age>=17){
            printf("You can see an R-rated movie");
        }

  return 0;
}
