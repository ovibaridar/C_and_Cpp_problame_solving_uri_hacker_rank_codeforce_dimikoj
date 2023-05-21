#include<bits/stdc++.h>
using namespace std;
int mian(){
int  n,m;
cin>>n>>m;

int a[n],i,sum=0,ch;
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>ch;
int  valu=a[m];
for(i=0;i<n;i++){
    if(a[i]==valu){
            continue ;
    }
    else{
        sum=sum+a[i];
    }
}
int sum1=ch-(sum/2);
if(sum1==0)
    cout<<"Bon Appetit"<<endl;
else{
    cout<<sum1<<endl;
}
return 0;
}
