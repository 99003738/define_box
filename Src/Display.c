#include <stdio.h>
#include <addlast.h>
#include <stdlib.h>
#include "display.h"

void displayone(Box *arrayOfBoxes)
{  
        printf("Unique ID - %d", arrayOfBoxes->unique_id);
        printf("\nLength - %d", arrayOfBoxes->length);
        printf("\nBreadth - %d", arrayOfBoxes->breadth);
        printf("\nHeight - %d", arrayOfBoxes->height);
        printf("\nColor - %s", arrayOfBoxes->color);
        printf("\nWeight - %d", arrayOfBoxes->weight);
}
void displayall(Box *arrayOfBoxes,int n)
{
    Box *boxcurr=arrayOfBoxes;
    for(int i=0;i<n;i++)
    {
        displayone(boxcurr++);
    }
}