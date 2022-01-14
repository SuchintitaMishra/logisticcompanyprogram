#include<stdio.h>
int main()
{
   int a=1, b=1, range, c, sum=0;

   scanf("%d",&range);

   while( a <= range )
   {
      printf("%d\n",a);
      sum += a;
      c = a + b;
      a = b;
      b = c;
   }

   printf("%d",sum);

   return 0;
}
