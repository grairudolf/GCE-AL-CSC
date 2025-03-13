#include <stdio.h>
#include <conio.h>

int main()
{
    int user;
    int num[100];
    printf("Enter a number betweel 1 and 100: ");
    scanf("&d", &user);
    for(int i=0; i<user; i++){
        num[i] = i+1;
    }
    int var;
    srand(time(NULL));
    while(var <= 6){
        int v = rand()%user;
        if(num[v] != 0){
            printf("%d", num[v]);
            num[v] = 0;
            var++;
        }
    }
    return 0;
}
