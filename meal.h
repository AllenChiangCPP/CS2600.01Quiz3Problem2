#include <stdio.h>
#include <stddef.h>
//struct that contains name of item on menu and its price
typedef struct 
{
    char *name;
    double price;
}meal, *mealPointer;
typedef const meal *mealConstantPointer;
