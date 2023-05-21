#include <bits/stdc++.h>
using namespace std;
int main() {
int  num ,j;
cin>>num;
string bits;
while(num>0){
    bits.append(to_string(num%2));
    num/=2;
}
reverse(bits.begin(),bits.end());
cout<<bits;



    return 0;
}
