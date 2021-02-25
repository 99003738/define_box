# include"min_max_volume.h"
# include"Boxes.h"
# include<stdio.h>
#include<stdlib.h>


unsigned long volume_of_box(Box *temp_box)
{
    unsigned long volume;
    volume= (temp_box->length)*(temp_box->breadth)*(temp_box->height);
    printf("\n%lu",volume);
    return volume;
}

unsigned long min_volume(Box *box1,const unsigned int number_of_boxes)
{
    Box *temp_box=box1;
    unsigned long minimum_volume=volume_of_box(temp_box);
    temp_box++;
    for(int i=0;i<number_of_boxes;i++)
    {
        if(minimum_volume > volume_of_box(temp_box))
        {
            minimum_volume = volume_of_box(temp_box);
            
            temp_box++;
        }
    }
    printf("\n%lu",minimum_volume);
    return minimum_volume;
}

unsigned long max_volume(Box *box1,const unsigned int number_of_boxes)
{
    Box *temp_box=box1;
    unsigned long maximum_volume=volume_of_box(temp_box);
    temp_box++;
    for(int i=0;i<number_of_boxes;i++)
    {
        if(maximum_volume < volume_of_box(temp_box))
        {
            maximum_volume = volume_of_box(temp_box);
        }
    }
    printf("\n%lu",maximum_volume);
    return maximum_volume;
}

unsigned long difference_min_max_volume(Box *box1,const unsigned int number_of_boxes)
{
    unsigned long minimum_volume=min_volume(box1,number_of_boxes);
    unsigned long maximum_volume=max_volume(box1,number_of_boxes);

    unsigned long difference_in_volume= maximum_volume-minimum_volume;

    return difference_in_volume;
}
