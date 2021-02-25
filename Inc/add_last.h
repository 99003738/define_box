/**
 * @file add_last.h
 * @author Neha Tabassum (neha.tabassum@ltts.com)
 * @brief This file stores header for all the boxes
 * @version 0.1
 * @date 2021-02-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

# ifndef __ADD_LAST_H__
# define __ADD_LAST_H__

/**
 * @brief Structure which holds information of unique_id,length,breadth,height,color,weight of every box
 */

struct Box
{
    unsigned int unique_id;
    unsigned int length;
    unsigned int breadth;
    unsigned int height;
    char color[50];
    unsigned int weight;
};

/**
 * @brief add_boxes adding data for the boxes
 * @param [in] box array where boxes to be added
 * @param [in] number_of_boxes total number of boxes
 * @return all the boxes
 */

void add_last(struct Box *);

# endif