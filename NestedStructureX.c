#include <stdio.h>
struct Hello
{
    int no;
    float marks;
    struct Demo 
    {
        int i;
        float f;
    }dobj;
};
int main()
{
    printf("Size of Hello structure is :%d\n",sizeof(struct Hello));      //16

    return 0;
}