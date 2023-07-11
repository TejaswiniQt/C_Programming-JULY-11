#include <stdio.h>

int main()
{
    int a=10,b=20,c=30,i;
    int *pi[3];
    pi[0] = &a;
    pi[1] = &b;
    pi[2] = &c;
    for(i=0; i<3; i++)
    {
        printf("pi[%d] = %p, *pi[%d] = %d\n",i,pi[i],i,*pi[i]);
    }

    return 0;
}