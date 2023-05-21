#include<stdio.h>
int main()
{

int a,b,c,X,Y,Z;
    scanf("%d%d%d",&a,&b,&c);
    X = a;
 if(a < b || a < c){
  if(b < c){
   X = c;
  }else{
   X = b;
  }
 }
 printf("%d\n", X);



 if(X==a)
 {
     if(b>c){
        Y=b;
     }
     else{
        Y=c;
     }
     printf("%d\n", Y);
 }

 if(X==b)
 {
     if(a>c){
        Y=a;
     }
     else{
        Y=c;
     }
     printf("%d\n", Y);


 }
 if(X==c)
 {
     if(a>b){
        Y=a;
     }
     else{
        Y=b;
     }
     printf("%d\n", Y);


 }



 if(a<b && a<c)
{
    printf("%d\n",a);
}
 if (b<a && b<c)
{
   printf("%d\n",b);
}

if(c<a && c<b)
{
    printf("%d\n",c);
}

printf("\n%d\n%d\n%d\n",a,b,c);

 return 0;
}








