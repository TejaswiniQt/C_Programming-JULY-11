#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *pa[5],i;
    for(i=0; i<5; i++)
    {
        pa[i] = arr+i ;
    }
    printf("Array elements are: \n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",**(pa+i));
        printf("%d\t",*pa[i]);
        printf("%d\t",*(*pa+i));
    }
    return 0;
}