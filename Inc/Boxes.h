/**
 * @file Boxes.h
 * @author Shivanshu Shukla (shivanshu.shukla@ltts.com)
 * @brief This file stores header for all the boxes
 * @version 0.1
 * @date 2021-02-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

# ifndef _BOXES_H_
# define _BOXES_H_


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief Structure which holds information of unique_id,length,breadth,height,color,weight of every box
 */

typedef struct
{
    unsigned int unique_id;
    unsigned int length;
    unsigned int breadth;
    unsigned int height;
    char color[50];
    unsigned int weight;
}Box;

#define MAX_SIZE 50 /*Maximum Number of boxes program allocates memory for*/


/**
 * @brief add_boxes adding data for the boxesunsigned int number_of_boxes)
 * @param [in] box1 array where boxes to be added
 * @param [in] number_of_boxes total number of boxes
 * @return all the boxes
 */

Box* add_boxes(Box* box1);

# endif
