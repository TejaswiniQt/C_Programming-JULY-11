#include <stdio.h>
#include <Stdlib.h>

int main()
{
    int *ptr,n,i;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",ptr+i);
    }
    printf("Elements of the array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}