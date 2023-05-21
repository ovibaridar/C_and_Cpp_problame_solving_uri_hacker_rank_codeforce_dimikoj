#include<stdio.h>
void jakkas (int n ,char x,char y,char z){
if(n>0){
    jakkas(n-1,x,z,y);
    printf("%c --> %c\n",x,y);
    jakkas(n-1,z,y,x);
}
}
int main(){
int m;
printf("Enter the plate number \n");
scanf("%d",&m);
if(m>0){
    jakkas(m,'A','B','C');

}
else {
    printf("Invalid Number inputed \n ");
}
return 0;
}
