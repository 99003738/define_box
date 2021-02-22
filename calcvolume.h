/**
 * @file calcvolume.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCVOLUME_H
#define __CALCVOLUME_H

#include"boxmodel.h"

unsigned long volume_of_box(Boxes *box1);
unsigned long avg_volume(Boxes *box1, unsigned int number_of_boxes);



#endif