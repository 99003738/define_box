/**
 * @file min_max_volume.h
 * @author Shivanshu Shukla (shivanshu.shukla@ltts.com)
 * @brief This file stores header for all the boxes
 * @version 0.1
 * @date 2021-02-20
 * @copyright Copyright (c) 2021
 * 
 */

# ifndef _MINMAXVOLUME_H_
# define _MINMAXVOLUME_H_

# include"Boxes.h"
# include<stdlib.h>
# include<stdio.h>

/*
 * @param box1 passes boxes
 * @return unsigned long volume of a single box
 */
unsigned long volume_of_box(Box *box1);

/**
 * @brief Finds minimum volume of all the boxes
 * 
 * @param box1 passes all the boxes
 * @return unsigned long min_volume of all the boxes
 */

unsigned long min_volume(Box *box1,const unsigned int number_of_boxes);
/**
 * @brief Finds maximum volume of all the boxes
 * 
 * @param box1 passes all the boxes
 * @return unsigned long max_volume of all the boxes
 */ 

/**
 * @brief Calculates difference between maximum and minimum volume of all the boxes
 * 
 * @param box1 passes all the boxes
 * @return unsigned long difference between maximum volume and minimum volume of all the boxes calculated
 */

unsigned long difference_min_max_volume(Box *box1,const unsigned int number_of_boxes);

# endif
