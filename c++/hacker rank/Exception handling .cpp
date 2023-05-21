
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        try{

        int a,b;
        cin>>a>>b;
        if(b==0)
        {
            throw 1;
        }
        cout<<a/b<<endl;
    }
    catch (int x){
    cout<<"srry you enter wrong num .please try again"<<endl;}
    }
}
