#include<stdio.h>

struct Box{

    int unique_id;
    float length;
    float breath;
    float height;
    string color;
    float weight;
}




int user_input(void)
{
    int number_box;
    printf(" Enter the number of box you want to create: ");
    scanf(" %d", &number_box);
    return (number_box);
}




int main()
{
int choice;


printf("Enter the action you want to perform -->\n\n");
printf("1 -> ADD Box\n\n");
printf("2 -> SHOW state of all boxes\n\n");
printf("3 -> FIND a box\n\n");
printf("4 -> COUNT all the box with a specified color\n\n");
printf("5 -> AVERAGE volumw of ALL the boxex\n\n");
printf("6 -> DIFFERENCE b/w min & max volume\n\n");
printf("7 -> UPDATE weight of a specified box\n\n");
printf("7 -> REMOVE box of a specified box\n\n");
printf("8 -> MAXIMUM Height Box\n\n");

scanf("%d",&choice);



}
