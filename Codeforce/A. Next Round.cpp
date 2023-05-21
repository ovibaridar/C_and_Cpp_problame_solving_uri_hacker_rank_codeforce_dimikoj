#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
}
int c=0;
for(i=0;i<n;i++){
    if(a[i]>=a[k-1] && a[i]>0){
       c++;
    }
}
cout<<c<<endl;
return 0;
}
