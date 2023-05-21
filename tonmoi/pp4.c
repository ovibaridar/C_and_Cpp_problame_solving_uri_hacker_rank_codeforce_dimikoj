#include<stdio.h>
int main(){
float a,b;
scanf("%f%f",&a,&b);
printf("**********RICE COST**********\n");
printf("Price              %.2f\n",a);
printf("Unit               %.2f\n",b);
printf("*****************************\n");
printf("Total              %.2f\n",(a*b));
return 0;
}
