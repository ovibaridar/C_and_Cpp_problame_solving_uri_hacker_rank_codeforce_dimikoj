#include<bits/stdc++.h>
using namespace std;
int main (){

int k,n ,w;
cin>>k>>n>>w;
int sum=0;
for(int i=1;i<=w;i++){
    sum=sum+i;
}
int sum2=(sum*k)-n;
if(sum2<=0){
    cout<<"0"<<endl;
}
else{
    cout<<sum2<<endl;
}
return 0;
}
