#include<stdio.h>
void tt(int a,char x,char y ,char z){
if(a>0){
tt(a-1,x,z,y);//132
printf("\n %c --> %c\n",x,z);//13
tt(a-1,y,x,z);//213
}
}
int main(){
int n;
printf("Enter the disk Number \n");
scanf("%d",&n);

tt(n,'A','B','C');
return 0;
}
