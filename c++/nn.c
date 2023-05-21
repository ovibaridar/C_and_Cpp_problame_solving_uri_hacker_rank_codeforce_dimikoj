#include<stdio.h>
int main(){
int n,i,j=0;
scanf("%d",&n);

for(i=1;i<=n;i++){
    j=j+i;
    //printf("%d ",i);
}
printf("%d\n",j);
return 0;
}
