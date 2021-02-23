#include<stdio.h>

struct Box{

    unsigned int unique_id;
    unsigned float length;
    unsigned float breath;
    unsigned float height;
    char color[30];
    unsigned float weight;
};

struct Box *bptr=NULL;

int ADD_Box(void)
{
    int number_box;
    printf(" Enter the number of box you want to create: ");
    scanf(" %d", &number_box);

bptr = (struct Box*) calloc(number_box* sizeof(struct Box));

    for(int k=1;k<=number_box;k++)
    {
        
        printf("\nEnter Unique ID for the BOX :");
        scanf("%u",bptr->unique_id);

         printf("\nEnter Length for the BOX : ");
        scanf("%u",bptr->length);
    
         printf("\nEnter Breadth for the BOX : ");
        scanf("%u",bptr->breath);
    
        printf("\nEnter Height for the BOX : ");
        scanf("%u",bptr->height);

        printf("\nEnter Color for the BOX : ");
        scanf("%s",bptr->color);

        printf("\nEnter Weight for the BOX : ");
        scanf("%u",bptr->weight);

        box1->unique_id=unique_id1;
        box1->length=length1;
        box1->breadth=breadth1;
        box1->height=height1;
        strcpy(box1->color,color1);
        box1->weight=weight1;

        box1++;
}

}




int main()
{
int choice;
int i;


printf("Enter the action you want to perform -->\n\n");
printf("1 -> ADD Box\n\n");
printf("2 -> SHOW state of all boxes\n\n");
printf("3 -> FIND a box\n\n");
printf("4 -> COUNT all the box with a specified color\n\n");
printf("5 -> AVERAGE volume of ALL the boxex\n\n");
printf("6 -> DIFFERENCE b/w min & max volume\n\n");
printf("7 -> UPDATE weight of a specified box\n\n");
printf("7 -> REMOVE box of a specified box\n\n");
printf("8 -> MAXIMUM Height Box\n\n");

scanf("%d",&choice);

if(choice<=1 && choice>=8)
{
    if (choice==1)
    {
        ADD_Box();
    } 
    if(choice==2)
    {
        SHOW_State();
    }
    if (choice==3)
    {
        FIND_Box();
    } 

    } 
    if (choice==4)
    {
        AVERAGE_Volume_box();
    } 
    if (choice==5)
    {
        MIN_MAX_Difference();
    } 
    if (choice==6)
    {
        UPDATE_Weight_Box();
    } 
    if (choice==7)
    {
        REMOVE_Box();
    } 
    if (choice==8)
    {
        MAX_Height();
    } 
}
}




