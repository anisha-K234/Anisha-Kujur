//WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
#include <stdio.h>

int main()
 {
    int males, females;
    float ratio;

    printf("Enter number of males: ");
    scanf("%d", &males);

    printf("Enter number of females: ");
    scanf("%d", &females);

    if (females != 0)
     {
        ratio = (float)males / females;
        printf("Gender ratio (M:F) = %.2f : 1\n", ratio);
    }
     else
    {
        printf("Invalid input. (Females cannot be 0).\n");
    }

    return 0;
}
