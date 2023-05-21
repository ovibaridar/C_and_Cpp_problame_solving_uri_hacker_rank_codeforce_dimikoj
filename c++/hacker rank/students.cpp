#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>s1;
        if(s1<38)
            cout<<s1<<endl;
        else
        {
            s2=(s1/5+1)*5;
            if(s2-s1<3)
                cout<<s2<<endl;
            else
                cout<<s1<<endl;
        }
    }
    return 0;
}

