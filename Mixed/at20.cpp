#include<bits/stdc++.h>
using namespace std;
int  main(){
long long k,big=0,n,i,sizee;
vector<long long int>a;
vector<long long int>b;
cin>>n;
for(i=0;i<n;i++){

 cin>>k;
 a.push_back(k);
}
sizee=a.size();
while (true){
    big=a[0];
for(i=0;i<sizee;i++){
 if(big<a[i]) {
    big=a[i];
 }

}
b.push_back(big);
a.erase(std::remove(a.begin(),a.end(),big),a.end());
big=0;
sizee=a.size();
if(b.size()==3){
    break;
}
}
for(auto &val : b){
    cout<<val;
}
return 0;
}
