#include<bits/stdc++.h>
using namespace std;
int main(){
int  n;
string a;
cin>>n;
for(int i=1;i<=n;i++){

    cin>>a;
    int len=a.size();
    if(len<11){
        cout<<a<<endl;
    }
    else{
        cout<<a[0]<<len-2<<a[len-1]<<endl;
    }

}
return 0;
}
