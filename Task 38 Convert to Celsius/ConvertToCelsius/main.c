#include <stdio.h>
#include <conio.h>

void ConvertToFahrenheit(float celsius){
    float fahrenheit = ((9/5) * celsius) + 32;
    printf("Your temperature in degrees fahrenheit is %.1f\n", fahrenheit);
}
void ConvertToCelsius(float fahrenheit){
    float celsius = (fahrenheit-32) * (5/9);
    printf("Your temperature in degrees celsius is %.1f\n", celsius);
}


void main(){
    float degfahr, degcel;
    //clrscr();
    int select;
    printf("Select 1 & 2 for the following options\n");
    printf("1: celsius to fahrenheit\t 2: fahrenheit to celsius\n");
    scanf("%d", select);

    if(select == 1){
    printf("Enter your temperature in degrees celsius\n");
    scanf("%f", &degcel);
    ConvertToFahrenheit(degcel);
    } else if(select == 2){
    printf("Enter your temperature in degrees farenheit\n");
    scanf("%f", &degfahr);
    ConvertToCelsius(degfahr);
    } else{
        system("pause");
    }


    //printf("Your temperature in degrees celsius is %.1f\n", convert);
    return 0;
}
