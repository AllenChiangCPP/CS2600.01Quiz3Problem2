#include <string.h> 
#include <stdlib.h> 
#include "meal.h" 
//table that contrains four meal items, salad, soup, sandwich, and pizza
meal mealTable[] =  
{ 
    {"Salad", 9.95}, 
    {"Soup", 4.55},
     {"Sandwich", 13.25}, 
     {"Salad", 9.95}, 
    
}; 
const int mealTableEntries = sizeof(mealTable)/sizeof(mealTable[0]);