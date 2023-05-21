#include<bits/stdc++.h>
using  namespace std;
int main(){
string first_string ,second_string;
cin>>first_string>>second_string;
int  i,a=0,b=0;
for(i=0;i<first_string.length();i++)
{
    first_string[i]=toupper(first_string[i]);

}
for(i=0;i<second_string.length();i++)
{
    second_string[i]=toupper(second_string[i]);

}

for(i=0;i<second_string.length();i++)
{
    a=int(first_string[i]);
    b=int(second_string[i]);
    if(a>b){
        cout<<"1"<<endl;
        return 0;
    }
    if(a<b){
        cout<<"-1"<<endl;
        return 0;
    }

}
cout<<"0"<<endl;
return 0;
}
