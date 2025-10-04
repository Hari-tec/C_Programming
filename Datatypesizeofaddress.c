#include<stdio.h>

int main()
{
   char cValue = 'A';
   int iValue = 20;
   float fValue = 10.4f;
   double dValue = 98.465846;

   printf("size of character is : %lu\n",sizeof(cValue));
   printf("size of integer is : %lu\n",sizeof(iValue));
   printf("size of flost is : %lu\n",sizeof(fValue));
   printf("size of double is : %lu\n",sizeof(dValue)); 

   printf("Address of character is : %lu\n",&cValue);
   printf("Address of integer is : %lu\n",&iValue);
   printf("Address of flost is : %lu\n",&fValue);
   printf("Address of double is : %lu\n",&dValue); 

   return 0;

}