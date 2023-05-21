#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a;
    int  k;
    int i;
    for( i=0;i<5;i++){
        cin>>k;
        a.push_back(k);
    }
   // int valu=10;

        for(auto &val : a){
        cout<<val<<endl;
    }
    return 0;
}
