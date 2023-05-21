#include<bits/stdc++.h>
using namespace std;
int main(){
int i;
float sum = 0;
for(i=1;i<=100;i++){
    sum+=(1/(float)i);
}
cout<<setprecision(3)<<sum<<endl;
}
