/**
 * @file box.h
 * @author Abhishek Guria
 * @brief  this file include all the prototype declaration for the box.h
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __BOX_H__
#define __BOX_H__


#include <stdio.h>
#include <stdlib.h>

 struct BOX
{
    long int Uniq_Id;
    long int length;
    long int breadth;
    long int height;
    char color[15] ;
    long int weight;
} ;

 
struct BOX* bptr;





int update_weight(int *bptr,int GivUniq_Id, int GivenWeight);
int delete_box(int *bptr,int GivUniq_Id);

#endif