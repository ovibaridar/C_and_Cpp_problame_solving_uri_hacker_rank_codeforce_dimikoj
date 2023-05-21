#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){

string inp;
cin>>inp;
long long int i,n=inp.length(),sum=0;
for(i=0;i<n;i++){
    sum+=(int(inp[i]-48))*pow(2,n-1-i);
}
cout<<"1th"<<sum<<endl;

string inpp;
cin>>inpp;
int m=inpp.length();

 long long int summ=0,j;
for(j=0;j<n;j++){
    summ+=(int(inpp[j]-48))*pow(2,m-1-j);
}
cout<<"2nd="<<summ<<endl;


    }

}
