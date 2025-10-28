//WAPC to do the following:
//  a.Input: age, citizenship status (Y/N), criminal record (Y/N).
//  b.Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
//  c.If age ≥ 60, print "Senior Citizen Eligible".
//  d.If not eligible, specify why.
#include <stdio.h>

int main() {
    int age;
    char citizenship, criminal;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizenship);
    printf("Any criminal record? (Y/N): ");
    scanf(" %c", &criminal);

    int eligible = (age >= 18) && (citizenship == 'Y' || citizenship == 'y') && (criminal == 'N' || criminal == 'n');

    if (eligible) {
        if (age >= 60)
            printf("Senior Citizen Eligible\n");
        else
            printf("Eligible\n");
    }
     else 
     {
        printf("Not eligible because:\n");
        if (age < 18)
         printf("- Age is less than 18\n");
        if (!(citizenship == 'Y' || citizenship == 'y')) 
        printf("- Not a citizen\n");
        if (!(criminal == 'N' || criminal == 'n'))
         printf("- Has a criminal record\n");
    }
    return 0;
}
