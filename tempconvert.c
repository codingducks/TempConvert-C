#include <stdio.h>

int main()
{
    char scale;
    double power_level;
    double fahr, cel, kel;

    do {
        printf("Enter The First Letter of Your Scale. \n");
        scanf("%c", &scale);
        while (getchar() != '\n');
    } while(scale != 99 && scale != 107 && scale != 102);

    do {
        printf("Enter the Temperature \n");
        scanf("%lf", &power_level);
        if(power_level > 9000){
            printf("This Tool is Intended For Use on Earth, Please Choose a Lower Number \n");}    
    } while(power_level > 9000);

    switch(scale){
    
        case 99:
            cel = power_level;
            fahr = power_level * 1.8 + 32;
            kel = power_level + 273.15;
            break;
        case 102: 
            cel = (power_level - 32) / 1.8;
            kel = (power_level + 459.67) * 0.55555556;
            fahr = power_level;
            break;
        case 107:
            fahr = power_level / 0.55555556 - 459.67;
            cel = power_level - 273.15;
            kel = power_level;
            break;
        }

    printf("Your Temperature in Celsius is %lf \n",cel);
    printf("Your Temperature in Kelvin is %lf \n",kel);
    printf("Your Temperature in Fahrenheit is %lf \n", fahr);
    return 0;

}
