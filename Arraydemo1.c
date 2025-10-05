#include <stdio.h>

int main()
{
    int Arr[4]={10,20,30,40};        //16

    int Brr[]={10,20,30,40,50};     //20

    int Crr[6]={10,20,30};         //24
    
    printf("size of Arr is:%lu\n",sizeof(Arr));
    printf("size of Brr is:%lu\n",sizeof(Brr));
    printf("size of Crr is:%lu\n",sizeof(Crr));




    return 0;
}