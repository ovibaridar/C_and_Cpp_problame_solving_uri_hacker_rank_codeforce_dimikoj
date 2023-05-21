#include<stdio.h>
int main()
{

int a,b,c,X,Y,Z;
    scanf("%d%d%d",&a,&b,&c);


 if(a<b && a<c)
{
    printf("%d\n",a);

}
 if (b<a && b<c)
{
   printf("%d\n",b);
   ;
}

if(c<a && c<b)
{
    printf("%d\n",c);
}




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




     m = a;
 if(a < b || a < c){
  if(b < c){
   X = c;
  }else{
   m = b;
  }
 }
 printf("%d\n", m);

 return 0;
}
