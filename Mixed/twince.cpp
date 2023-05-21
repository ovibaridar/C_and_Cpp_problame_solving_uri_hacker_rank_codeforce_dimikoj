#include<bits/stdc++.h>
using  namespace std;
int  main(){
int n,i,k,j,count=0;
cin>>n;
vector<int>a;

for(i=0;i<n;i++){
    cin>>k;
    if(k==0){
        continue;
    }
    else{
    a.push_back(k);
    }
}
int sizee=a.size();
int sizee1=a.size();
int  chake,count2=0;
for(i=0;i<sizee;i++){
    chake=a[0];
    for(j=0;j<sizee1;j++){
        if(a[j]==chake)
            count++;
    }
    if(count==2){
        count2++;
    }
    a.erase(std::remove(a.begin(),a.end(),chake),a.end()) ;
    chake=0;
    count =0;
    sizee1=a.size();
    if(sizee1==0)
        break;
}
cout<<sizee-count2<<endl;
}
