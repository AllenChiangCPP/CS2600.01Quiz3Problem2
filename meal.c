#include <string.h>
#include <stdlib.h>
#include "meal.h"
#include <time.h>
//randomizeBill/mealCost function
//function that randomizes the bill based on meal.h struct, and mealTable.c
float randomizeMealCost(mealConstantPointer ptr, int tableSize)
{
    srand(time(NULL)); //helps randomize function
    float billTotal = 0; //create billTotal to fill up and return later
    const mealConstantPointer endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        //randomize numbers 1-4 for each item to determine bill and quantity of each item
        int randomQuantity = 1 + rand() % 4; 
        char* mealName = ptr->name; //get current name on mealTable
        float mealPrice = ptr->price; //get current price on mealTable
        //print cost and quantity of each item
        printf("%d x %s: $%0.2f\n",randomQuantity, mealName, mealPrice  * randomQuantity);
        billTotal += (mealPrice * randomQuantity);
    }
    //return total meal cost for calculating tip and tax in restaurantBill.c
    return billTotal;
}

    
    
    
    