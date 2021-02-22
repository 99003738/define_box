/**
 * @file box38.h
 * @author Abhishek Mishra
 * @brief  this file include all the prototype declaration for the box38.h
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __BOX38_H__
#define __BOX38_H__


#include <stdio.h>
#include <stdlib.h>

typedef struct box
{
    long int Uniq_Id;
    long int length;
    long int breadth;
    long int height;
    char color[15] ;
    long int weight;
} BOX;

 
BOX* bptr;



int _input(void);
int table_allocation(void);
int additionOfBox(int*);

int inserting_value(int*);




#endif