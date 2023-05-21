#include<stdio.h>
int main (){
float p,r,n,z;
scanf("%f%f%f",&p,&r,&n);
float s=((1+r/100));
for(int i=1;i<=n;i++){
     z=p*pow(s,i);
}
printf("%.2f\n",z);
return 0;
}

