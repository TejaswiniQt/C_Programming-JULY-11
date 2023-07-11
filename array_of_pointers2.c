#include <stdio.h>

int main()
{
    int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *pa[3],i,j;
    for(i=0; i<3; i++)
    {
        pa[i] = *(arr+i); //storing address of each row
    }
    printf("The elements of array are: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",*(*(pa+i)+j));
        }
        printf("\n");
    }
    return 0;
}