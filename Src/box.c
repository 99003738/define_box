#include<stdio.h>
#include<stdlib.h>

struct Box {
    int uniqueID;
    int length;
    int breadth;
    int height;
    char color[100];
    int weight;
};
int main()
{
    int n, i;  //  variables are declared
    printf("Enter number of elements:");
    scanf("%d", &n);
    struct Box* arrayOfBoxes = malloc(n*sizeof(struct Box));

    for(i = 0; i<n; i++) 
    {
        printf("\nEnter Unique ID:");
        scanf("%d",&arrayOfBoxes[i].uniqueID);
        printf("\nEnter length:");
        scanf("%d",&arrayOfBoxes[i].length);
		printf("\nEnter breadth:");
        scanf("%d",&arrayOfBoxes[i].breadth);
		printf("\nEnter height:");
        scanf("%d",&arrayOfBoxes[i].height);
        printf("\nEnter Box color:");
        scanf("%s",arrayOfBoxes[i].color);
        printf("\nEnter weight:");
        scanf("%d",&arrayOfBoxes[i].weight);
		printf("Box Added\n");
    }

    printf("Displaying the state of all boxes\n");
    for(i = 0; i<n; i++) {
        printf("Unique ID - %d", arrayOfBoxes[i].uniqueID);
        printf("\nLength - %d", arrayOfBoxes[i].length);
        printf("\nBreadth - %d", arrayOfBoxes[i].breadth);
        printf("\nHeight - %d", arrayOfBoxes[i].height);
        printf("\nColor - %s", arrayOfBoxes[i].color);
        printf("\nWeight - %d", arrayOfBoxes[i].weight);
    }
    return 0;
}
