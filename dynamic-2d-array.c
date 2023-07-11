#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,row;
    int (*ptr) [4];
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    ptr = (int (*) [4])malloc(row*4*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
        exit(1);
    }
    printf("Enter the array elements: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",*(ptr+i)+j);
        }
    }
    printf("Elements of the array are: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}