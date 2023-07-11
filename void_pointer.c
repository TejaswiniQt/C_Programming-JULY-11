#include <stdio.h>

int main()
{
    int a=5;
    char c='a';
    float b = 5.8;
    double k = 80.63;
    void *vp;
    vp = &a;
    printf("a=%d\n",*(int *)vp);
    vp = &c;
    printf("c=%c\n",*(char *)vp);
    vp = &b;
    printf("b=%f\n",*(float *)vp);
    vp = &k;
    printf("k=%lf\n",*(double *)vp);
    return 0;
}