#include<stdio.h>
int main(){
float a,b,sum;
scanf("%f%f",&a,&b);
if(a>=1 && a<=50 && b>=51 && b<=100){
    sum = (a+b)/2;
printf("%.2f\n",sum);
}
else if(a>=101 && a<=150 && b>=151){
    sum = (a+b)*2;
printf("%.2f\n",sum);
}
else
    printf("You enter the wrong num\n");
return 0;
}
