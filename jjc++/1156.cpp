#include<bits/stdc++.h>
using namespace std;
int main(){
int i ;
float s=1,j=1;
for(i=3;i<=39;i=i+2){
    j*=2;
    s+=(float)i/(float)j;
}
cout<<setprecision(3)<<s<<endl;
}
