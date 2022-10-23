#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meal.h"
//code based on employee code from lecture
//main take command line arguments tax and tip percentages
int main(int argc, char *argv[])
{
    if(argc != 3) //checks if there are two inputs using argc, if not print error message and exit
    {
        printf("ERROR: Not two inputs tax and tip percentages.");
        return 0;
    }
    //defined in meal.c
    float randomizeMealCost(mealConstantPointer ptr, int tableSize); 
    //defined in mealTable.c
    extern meal mealTable[];
    extern const int mealTableEntries;
    char *tax = argv[1]; //store tax input for checking and printing
    char *tip = argv[2]; //store tip input for checking and printing
    if(tax[strlen(tax)-1] != '%' || tip[strlen(tip)-1] != '%') //checks if user inputs are percentages, if not print error message and exit
    {
        printf("ERROR: Input not a percentage.");
        return 0;
    }
    printf("Tax percentage: %s\n", tax); 
    printf("Tip percentage: %s\n", tip);
    printf("-------------------------\n");
    tax[strlen(tax)-1] = '\0'; //remove the '%' from tax to convert to float later
    tip[strlen(tip)-1] = '\0'; //remove the '%' from tip to convert to float later
    float taxRate = atof(tax) * 0.01; //covert tax to float and store in taxRate
    float tipRate = atof(tip) * 0.01; //convert tip to float and store in tipRate
    //use randomizeMealCost in meal.c to generate the meal and its contents
    //get total meal cost from randomizeBill and calculate tax and tip and print contents 
    float totalMealCost = randomizeMealCost(mealTable, mealTableEntries);
    printf("Meal Cost: $%0.2f\n", totalMealCost);
    printf("-------------------------\n");
    printf("Tax: $%0.2f\n", totalMealCost * taxRate); //calculate and print tax
    printf("Tip: $%0.2f\n", totalMealCost * tipRate); //calculate and print tip
    printf("Total: $%0.2f\n", totalMealCost + (totalMealCost*taxRate) + (totalMealCost*tipRate)); //calculate and print total cost of bill
    return 0;
}
    
    
