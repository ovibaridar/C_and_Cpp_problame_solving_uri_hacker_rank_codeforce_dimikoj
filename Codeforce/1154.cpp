#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0,b,count=0;
while(true)
{
    cin>>b;
    if(b<0) break;
    else{
    sum+=b;
    count ++;
    }

}
float a =(sum/count);
cout<<std::setprecision(4)<<a<<endl;
return 0;
}
