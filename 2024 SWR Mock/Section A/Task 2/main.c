#include <stdio.h>
#include <stdlib.h>
int codes[10] = {1111110,110000,1101101,1111001,110011,1011011,1011111,1110000,1111111,1111011};

void initGrid(char A[7][5]){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            A[i][j] = ' ';
        }
    }

}

void fillSegment(char A[7][5], int s){
	int r, c;
    switch(s){
        case 1:
                for (c = 1; c < 4; c++) {
                    A[0][c] = '#';
                }
            break;
        case 2:
                for (r = 1; r < 3; r++) {
                    A[r][4] = '#';
                }
            break;
        case 3:
            for (int r = 4; r < 6; r++) {
                    A[r][4] = '#';
            }
            break;
        case 4:
            for (c = 1; c < 4; c++) {
                A[6][c] = '#';
            }
            break;
        case 5:
            for (r = 4; r < 6; r++) {
                A[r][0] = '#';
            }
            break;
        case 6:
            for (r = 2; r < 4; r++) {
                    A[r][0] = '#';
            }
            break;
        case 7:
            for (c = 1; c < 4; c++) {
                A[4][c] = '#';
            }
            break;

        default:
            printf("Invalid segment number: %d\n", s);
            break;
    }
}

void fillAll(char A[7][5], int code){
    int segment = 7;
    int bit;
    while(code != 0){
        bit = code % 10;
        if(bit == 1){
            fillSegment(A[7][5], segment);
        }
        code /= 10;
        segment--;
    }
}

void doDisplay(char A[7][5]){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int number, reverse = 0, d;
    char grid[7][5];
    printf("Enter an integer: ");
    scanf("%d", &number);
    while(number != 0){
        reverse = reverse * 10 + (number % 10);
        number = number / 10;
    }

    initGrid(grid);
    while(reverse != 0){
        d = reverse % 10;
        fillAll(grid, codes[d]);
        reverse = reverse / 10;
        doDisplay(grid);
        initGrid(grid);
    }
    system("pause");
    return 0;
}
