#include "box38.h"


int* _input(void)
{
    int number_box;
    printf(" Enter the number of table want to create : ");
    scanf(" %d" &number_box);
    return (&number_box);

}

int table_allocation()
{
    int *number,act_num;
      number = _input();
      act_num = *number;
     bptr = (BOX*)malloc(act_num*sizeof(BOX));
     if(bptr == NULL)
     {
         printf("Memory allocation failed");
         exit(1);
     }
}