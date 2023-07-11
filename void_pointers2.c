#include <stdio.h>

int main()
{
    float arr[5] = {1.2,5.9,4.6,2.7,8.1};
    int i;
    void *vp=arr;
    printf("Elements of array are:\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f\t",*((float *)vp+i));
    }
    return 0;
}