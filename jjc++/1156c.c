#include<stdio.h>
int main(){
double i,s=0,j=1;
for(i=1;i<=39;i=i+2){
    s+=i/j;
    j*=2;
}
printf("%.2lf",s);
}
