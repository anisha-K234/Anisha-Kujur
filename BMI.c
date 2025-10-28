//WAPC to do the following:
//Input: height (m), weight (kg).
//Calculate BMI = weight / (height²).
//Classify:
// a. BMI < 18.5 → Underweight
// b. 18.5 ≤ BMI < 25 → Normal
// c. 25 ≤ BMI < 30 → Overweight
// d. ≥ 30 → Obese
//If overweight or obese and age > 40 → print "Consult doctor".
#include<stdio.h>
#include<math.h>

int main() {
    double height, weight;
    int age;
    printf("Enter height (m) and weight (kg): ");
    scanf("%lf %lf", &height, &weight);
    printf("Enter age: ");
    scanf("%d", &age);

    if (height <= 0)
    {
        printf("Invalid height\n");
    }
    double bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if ( bmi >= 18.5 && bmi < 25.0)
        printf("Normal\n");
    else if ( bmi >= 25.0 && bmi < 30.0)
        printf("Overweight\n");
    else
        printf("Obese\n");

    if ((bmi >= 25.0) && (age > 40))
        printf("Consult doctor\n");
    return 0;
}
