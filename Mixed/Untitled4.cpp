#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int   n,m;
cin>>n>>m;
int a[n];
long long int  i,ch;
long long int sum=0;
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>ch;
int  valu=a[m];
for(i=0;i<n;i++){
    if(i==m){
            continue ;
    }
    else{
        sum=sum+a[i];
    }
}
long long int sum1=ch-(sum/2);
if(sum1==0)
    cout<<"Bon Appetit"<<endl;
else{
    cout<<sum1<<endl;
}
    return 0;
}

