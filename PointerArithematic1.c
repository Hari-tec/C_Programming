#include <stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Data Featched by P is : %d\n",*p);             //21
    printf("Data Featched by q is : %d\n",*q);             //111



    return 0;
}