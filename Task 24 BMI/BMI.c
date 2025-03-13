#include<stdio.h>

int main(){
    int weight;
    float height;
    float BMI;
    float lose_weight, ideal_weight;
    printf("Height in meters: ");
    scanf(" %f", &height);
    printf("Weight in kilograms: ");
    scanf(" %d", &weight);
    //BMI= weight/(height*height);

    BMI = 25;
    ideal_weight = BMI * (height * height);//ideal weight for the user
    lose_weight = weight - ideal_weight;// weight to lose by the user

    if(lose_weight > 0){
        printf("You have to lose %.2f", lose_weight);
    } else{
        lose_weight = lose_weight * -1;//In case the user is underweighted
        printf("You have to lose %.2f", lose_weight);
    }


    /* if(20 <= BMI <=25){
        printf("You have normal weight\n");
    }
    printf("Your Body mass index is: %d\n\n",BMI);
        if(BMI >=20 && BMI<=25){
        printf("You have normal weight\n\n");
    }
    else if(BMI<20){
        printf("You are thin you need to eat more food");
    }
    else if(BMI>25){
        printf("You are Fat, Try working out");
    }*/
return 0;
}
