# include"min_max_volume.h"
# include"Boxes.h"
# include<stdio.h>
#include<stdlib.h>

unsigned long volume_of_box(Box *box1)
{
    unsigned long volume;
    volume= (box1->length)*(box1->breadth)*(box1->height);
    return volume;
}

unsigned long min_volume(Box *box1,const unsigned int number_of_boxes)
{
    unsigned long minimum_volume=65536;
    Box *temp_box=box1;
    for(int i=0;i<number_of_boxes;i++)
    {
        if(minimum_volume < volume(temp_box))
        {
            minimum_volume = volume(temp_box);
            
            temp_box++;
        }
    }
    return minimum_volume;
}

unsigned long max_volume(Box *box1,const unsigned int number_of_boxes)
{
    int maximum_volume=0;
    Box *temp_box=box1;
    for(int i=0;i<number_of_boxes;i++)
    {
        if(maximum_volume < volume(temp_box))
        {
            maximum_volume = volume(temp_box);
            
            temp_box++;
        }
    }
    return maximum_volume;
}

unsigned long difference_min_max_volume(Box *box1,const unsigned int number_of_boxes)
{
    unsigned long minimum_volume=min_volume(box1,number_of_boxes);
    unsigned long maximum_volume=max_volume(box1,number_of_boxes);

    unsigned long difference_in_volume= maximum_volume-minimum_volume;

    return difference_in_volume;
}