#include <stdio.h>
struct Demo
{
    int i;
    float f;
    char ch;
    int j;
};
int main()
{
    printf("Size of Structure is :%d\n",sizeof(struct Demo));

    return 0;
}