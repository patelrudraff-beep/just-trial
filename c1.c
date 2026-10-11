#include<stdio.h>
int main()
{
   int avg, sum=0;
   int i;
   int marks[30];
   for(i=0;i<30;i++)
   {
       scanf("%d",&marks[i]);
       sum=sum+marks[i];
   }
   avg=sum/30;
   printf("Average marks: %d",avg);

   return 0;
}