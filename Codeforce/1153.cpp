#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i;
cin>>n;
int sum=n;
for(i=1;i<n;i++){
    sum*=(n-i);
}
cout<<sum<<endl;
return 0;
}
