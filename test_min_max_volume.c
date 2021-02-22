# include"min_max_volume.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
      Box *box1;
      unsigned int number_of_boxes;
      box1=(Box*)malloc(sizeof(Box)*__INT_MAX__);
      printf("\nEnter how many boxes you want to add :");
      scanf("%u",&number_of_boxes);
      box1=add_boxes(box1,number_of_boxes);
      unsigned long diff=difference_min_max_volume(box1,number_of_boxes);
      printf("\nDifference between maximum and minimum volume");
      printf("%lu",diff);
      free(box1);
      return 0; 
}