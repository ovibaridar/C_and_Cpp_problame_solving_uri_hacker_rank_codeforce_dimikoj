#include<bits/stdc++.h>
using namespace std;
int main(){
int a,n,count;
cin>>n;
for(int i =0;i<n;i++){
count=0;
cin>>a;
string  s =to_string(a);
int b=s.length();



for(int i =0;i<b;i++){
    char m =s[i];
  int z =(int) m;
  int sum =z-48;
        if(sum==0){
            continue;
        }
        else{
            if(a%sum==0){
                count++;
            }
        }
        sum=0;
        m=0;
        z=0;
}
cout<<count<<endl;
}
return 0;
}
