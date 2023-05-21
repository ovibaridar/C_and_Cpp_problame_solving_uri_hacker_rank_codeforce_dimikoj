#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>o;
    int a;
    for(int i=0; i<5; i++)
    {
        cin>>a;
        o.push_back(a);
    }


    for(int i=0; i<5; i++)
    {
        cout<<o[i];
    }
    //cout<<endl<<o.size();

cout<<endl<<o.back()<<endl;
cout<<o.front()<<endl;
o.clear();
cout<<o.size();
    return 0;
}
