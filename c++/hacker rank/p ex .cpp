#include<bits/stdc++.h>
using namespace std;
class ball :public exception{
const char * what() const throw(){
return "srry you enter wrong num .please try again\n";
}
};
int main()
{
    while (1)
    {
        try{
            int a,b;
            cin>>a>>b;
            if(b==0){
                ball m;
            throw m;}
            else{
                cout<<a/b;
            }
        }
        catch (exception& e){
        cout<<e.what();}
    }
}
