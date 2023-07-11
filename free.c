#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i,n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",ptr+i);
    }
    printf("The elements of the array are:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}