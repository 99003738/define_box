/**
 * @file box_model.h
 * @author Aditya Mewara (aditya.mewara@llts.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BOXMODEL_H
#define __BOXMODEL_H

/**
 * @brief Box model structure created
 * 
 */

typedef struct
{ /* data */
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    int weight;
    float volume;
}Boxes;

struct Boxes *head; 

void display(const Boxes *ptr);
Boxes *addbox(Boxes *box_add, int number_of_boxes);

#endif
