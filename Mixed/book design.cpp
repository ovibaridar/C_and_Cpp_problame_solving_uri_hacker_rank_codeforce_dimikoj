#include<bits/stdc++.h>
using  namespace std;
int main(){
int  a,b,i,ccount=0;
cin>>a>>b;
for(i=b;i<=a;i=i+3){
    if(i==b){
        continue;
    }
    else{
    ccount++;
    }
}
cout<<ccount;
return 0;
}
