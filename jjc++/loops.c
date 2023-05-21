#include<stdio.h>
int main(){
 while(1){
 float x,y,z;
 scanf("%f%f%f",&x,&y,&z);
 printf("TRIANGULO: %.3f",.5*x*z);
 printf("\nCIRCULO: %.3f",3.14159*z*z);
 printf("\nCIRCULO: %.3f",(x+y/2)*z);
 }
 return 0;
}
