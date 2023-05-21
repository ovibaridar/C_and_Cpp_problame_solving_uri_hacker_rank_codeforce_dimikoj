
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s; //04:01:12PM
    if(s[6]=='P')
    {
        if(n==12)
            cout<<n;
        else
            cout<<n+12;
    }
    else
    {
        if(n==12)
            cout<<"00";
        else
            cout<<"0"<<n;
    }
        s.erase(6);
        cout<<s;
        return 0;



}
