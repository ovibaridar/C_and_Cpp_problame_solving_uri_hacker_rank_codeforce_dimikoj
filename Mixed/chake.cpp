#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
int  n,k,i;
vector <int> a;
cin>>n;
for(i=0;i<n;i++){
    cin>>k;
    a.push_back(k);
}
vector<int>b;
int  valu=0,coun=0;
int sizee =a.size();
while(true){
    i=0;
    valu=a[0];
    for(int j=0;j<sizee;j++){
   if(valu==a[j]){
    coun++;
   }

    }
    if(coun==2){
        b.push_back(valu);

    }
    a.erase(std::remove(a.begin(),a.end(),valu),a.end()) ;
    sizee =a.size();
    valu=0;
    coun =0;
    sizee =a.size();
    if(sizee==0){
        break;
    }

}
for(i=0;i<b.size();i++){
    cout<<b[i];
}
return 0;
}
