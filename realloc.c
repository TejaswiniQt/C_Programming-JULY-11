#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i;
    ptr=(int *)malloc(4*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
        exit(1);
    }
    printf("Enter elements: \n");
    for(i=0; i<4; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\n");
    ptr = (int *)realloc(ptr,7*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }
    for(i=4; i<7; i++)
    {
        ptr[i] = i+1;
    }
    printf("The elements of the array are:\n");
    for(i=0; i<7; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}