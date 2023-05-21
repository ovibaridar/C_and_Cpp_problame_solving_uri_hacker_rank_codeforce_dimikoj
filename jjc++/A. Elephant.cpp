#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  x,coun=0;
    cin>>x;
    while(true)
    {
        if(x>=5)
        {
            x=x-5;
            coun++;
            continue;
        }
        if(x>=4)
        {
            x=x-4;
            coun++;
            continue;
        }
        if(x>=3)
        {
            x=x-3;
            coun++;
            continue;
        }
        if(x>=2)
        {
            x=x-2;
            coun++;
            continue;
        }
        if(x>=1)
        {
            x=x-1;
            coun++;
            continue;
        }
        if(x<=0)
        {
            cout<<coun<<endl;
            return 0;
        }
    }
}
