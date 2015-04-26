#include<stdio.h>

int main()
{
   int a, b, c;

   printf("Enter 2 numbers to add\n");
   scanf("%d%d",&a,&b);

   c = a - b;

   printf("difference of entered numbers = %d\n",c);

   return 0;
}
