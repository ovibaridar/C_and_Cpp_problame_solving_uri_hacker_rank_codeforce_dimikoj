#include<bits/stdc++.h>
using  namespace std;
int main(){
int n,i,k;
cin>>n;
vector<int>a;
for(i=0;i<n;i++){
cin>>k;
a.push_back(k);
}
int match=0,c=0;
vector<int>b;
int sizze =a.size();
int sizzee =a.size();
for(i=0;i<sizzee;i++){

    match=a[0];
    for(int j =0;j<sizze;j++){
        if(match==a[j]){
            c++;
        }
    }
    if(c>0){
   b.push_back(c);
    }
   c=0;
   a.erase(std::remove(a.begin(),a.end(),match),a.end()) ;
   match=0;
    sizze =a.size();
   if(sizze==0){
    break;
   }
}
int output =0;
for(i=0;i<b.size();i++){
    if(b[i]>1){
        output=output+(b[i]/2);
    }
}
cout<<output<<endl;
return 0;
}
