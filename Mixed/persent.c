/* C Program to Count Even and Odd Numbers in an Array */
#include<stdio.h>

int main()
{
 int Size, i, a;
 int Even_Count = 0, Odd_Count = 0;



 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
     Even_Count++;
   }
   else
   {
     Odd_Count++;
   }
 }

 printf("\n Total Number of Even Numbers in this Array = %d ", Even_Count);
 printf("\n Total Number of Odd Numbers in this Array = %d ", Odd_Count);
 return 0;
}
