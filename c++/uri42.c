#include<stdio.h>
int main()
{
    int a,b,c,X,Y;
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
        Y=;
     }
     printf("%d\n", Y);


 }

 if(X==c)
 {
     if(b>a){
        Y=b;
     }
     else{
        Y=a;
     }
     printf("%d\n", Y);

     if(X==c  && Y==b)
 {
     printf("%a\n",a);


 }
     if(X==a  && Y==b)
 {
     printf("%d\n",c);


 }
     if(X==a  && Y==c)
 {
     printf("%d\n",b);


 }
 }
    printf("\n%d\n%d\n%d\n",a,b,c);
}
