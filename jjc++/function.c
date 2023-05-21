#include<stdio.h>
 void ovi(){
 printf("\nPlease Enter  a Number :");
 }
 int nahid(int a ,int b){
 return printf("\n This is sum %d",a+b);
 }
 int nayeem(int a ,int b){
 return printf("\n This is sub %d",a-b);
 }
int main(){
int x,y;
ovi();
scanf("%d",&x);
ovi();
scanf("%d",&y);
nahid(x,y);
nayeem(x,y);
return 0;
 }
