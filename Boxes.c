# include"Boxes.h"
#include<stdlib.h>

Box* add_boxes(Box *box1,unsigned int number_of_boxes)
{
    if(box1==NULL)
    {
        printf("You can't add anymore boxes");
        return ;
    }
    for(int i=0;i<number_of_boxes;i++)
    {
        printf("\nEnter Unique ID for the BOX :");
        scanf("%u",box1->unique_id);
    
         printf("\nEnter Length for the BOX : ");
        scanf("%u",box1->length);
    
         printf("\nEnter Breadth for the BOX : ");
        scanf("%u",box1->breadth);
    
        printf("\nEnter Height for the BOX : ");
        scanf("%u",box1->height);

        printf("\nEnter Color for the BOX : ");
        scanf("%s",box1->color);

        printf("\nEnter Height for the BOX : ");
        scanf("%u",box1->weight);

        box1++;
    }
    return box1;
}
