#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][3],i,j;
for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
    }
}
int  sum ,count=0;
for(i=0;i<n;i++){
        sum=0;
    for(j=0;j<3;j++){
        sum+=a[i][j];
    }
    if(sum>=2) count++;
}
cout<<count<<endl;
}
