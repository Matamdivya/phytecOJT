#include <stdio.h>
int main() {
    float weight,height,bmi;

    printf("Enter weight (kg): ");
    scanf("%f",&weight);

    printf("Enter height (m): ");
    scanf("%f",&height);

    bmi = weight/(height*height);

    if(bmi < 18.5)
        printf("Underweight");
    else if(bmi < 25)
        printf("Normal");
    else if(bmi < 30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}
