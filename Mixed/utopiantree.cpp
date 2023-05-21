#include<bits/stdc++.h>
using namespace std ;

int  main(){
int  a,i,valu,powa=0,c,n,j,m;
cin>>n;
for(j=0;j<n;j++){
valu = 0;
c = 1;
m=0;
cin>>a;
if(a==0){
    cout<<"1"<<endl;
}
else {
for(i=1;i<=a;i=i+2){
   powa = pow(2,c)+valu;
   valu =powa;
   c++;
}
if(a%2==0){
         m =valu+1;
    cout<<m<<endl;
}
else {
    cout<<valu<<endl;
}
}
}
return 0;
}
