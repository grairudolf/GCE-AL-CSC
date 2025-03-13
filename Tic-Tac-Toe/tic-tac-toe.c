#include <stdio.h>
#include <stdlib.h>

int board[3][3];
char player1[];
char player2[];

void initialise(){
    printf("%s plays with token X\n", player1);
    printf("%s plays with token O\n", player2);
}

void displayBoard(char b[3][3]){
    printf("+----+----+----+\n");
    printf("| %c | %c | %c |\n", b[0][0], b[0][1], b[0][2]);
    printf("+----+----+----+\n");
    printf("| %c | %c | %c |\n", b[1][0], b[1][1], b[1][2]);
    printf("+----+----+----+\n");
    printf("| %c | %c | %c |\n", b[2][0], b[2][1], b[2][2]);
    printf("+----+----+----+\n");
}

int setMove(char b[3][3], int pos, char tok){
    switch(pos){
        case 1: if(b[0][0] == '1'){
            b[0][0] = tok;
        }
    }
}

int main()
{

    system("pause");
    return 0;
}
