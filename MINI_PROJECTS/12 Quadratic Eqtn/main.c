#include <stdio.h>
#include <math.h>
double x1, x2;//roots
void equal_roots(int a, int b, int c){//equal roots
    int disc = b*b - 4*a*c;
    printf("The roots are real and equal\n");
    x1 = -b/(2*a);
    x2 = -b/(2*a);
    printf("root 1 is %.1f and root 2 is %.1f\n", x1, x2);}

void distinct_roots(int a, int b, int c){//real distinct roots
    int disc = b*b - 4*a*c;
    printf("The roots are real and distinct\n");
    x1 = (-b + sqrt(disc))/(2 * a);
    x2 = (-b - sqrt(disc))/(2 * a);
    printf("root 1 is %.1f and root 2 is %.1f\n", x1, x2);}

void imaginary_roots(int a, int b, int c){//imaginary roots
    int disc = b*b - 4*a*c;
    printf("The Root of the equation are complex\n");
    double rez = -b/(2*a);
    double imz = sqrt(abs(disc))/ 2*a;
    printf("root 1 is %.1f + %.1fi\nroot 2 is %.1f - %.1fi\n", rez, imz, rez, imz);
    }
void quadratic(int a, int b, int c){
    int disc = b*b - 4*a*c;
    if(a == 0 || b == 0){
        printf("Please enter non zero values\n");
    }else{
        if(disc == 0){
            equal_roots(a,b,c);
        } else if(disc > 0){
            distinct_roots(a,b,c);
        } else if(disc < 0){
            imaginary_roots(a,b,c);
        }
    }
}
int main(){
    printf("Program to determine the roots of a quadratic equation\nOf the form ax^2 + bx + c\n");
    float a, b, c;
    printf("Enter the values of a, b and c \n");
    scanf("%f %f %f", &a, &b, &c);
    quadratic(a,b,c);
    system("pause");
    return 0;
}
