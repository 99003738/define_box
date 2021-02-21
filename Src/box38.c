#include "box38.h"


int* _input(void)
{
    int number_box;
    printf(" Enter the number of table want to create : ");
    scanf(" %d" &number_box);
    return (&number_box);

}

int* table_allocation()
{
    int *number,act_num;
      number = _input();
      act_num = *number;
     bptr[act_num] = (BOX*)malloc(act_num*sizeof(BOX));
     if(bptr == NULL)
     {
         printf("Memory allocation failed");
         exit(1);
     }
   return (&bptr);

}

int inserting_value(int* bptr)
{
    while (bptr!= NULL)
    {
        bptr[0]->Uniq_Id = 00001;
        bptr[0]->length = 10;
        printf(" %d %d",*bptr[0]->Uniq_ID, *bptr[0]->length);
    }
}