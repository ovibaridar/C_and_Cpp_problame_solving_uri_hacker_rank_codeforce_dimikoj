#include<bits/stdc++.h>
#include<vector>
using namespace std;
int  main(){

int  n,k,i,ll;
cin>>n;
vector<int>a;
for(i=0;i<n;i++){
 cin>>k;
 a.push_back(k);
}
int b=a[0],l=0;
for(i=0;i<a.size();i++){
  if(b<a[i])
    b=a[i];
}
ll=b;
cout<<ll;
return 0;
}

