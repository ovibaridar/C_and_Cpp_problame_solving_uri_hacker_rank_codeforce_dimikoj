#include<bits/stdc++.h>
using namespace std;
int main(){
std::string a;
char ch;
std::getline(std::cin,a);
int si=a.size();
cout<<si<<endl;
for(int i=0;i<si;i++){
    int aski=a[i];

    if(aski==32)
        ch =aski;

    else if (aski==122)
        ch=97+2;
    else if(aski==90)
        ch=65+2;
    else
        ch=aski+2;

    cout<<ch;
}
return 0;
}
