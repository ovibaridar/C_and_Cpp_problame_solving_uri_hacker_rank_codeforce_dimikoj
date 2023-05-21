#include<stdio.h>
int main(){
int n,i,j,sum=0;
scanf("%d",&n);

for(i=1;i<=n;i++){
    j=i+(i*i);
    sum=sum+j;
}
printf("%d\n",sum);
return 0;
}

