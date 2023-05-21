#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    for(int i=0;i<word.size();i++){
        word[i]=tolower(word[i]);
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='y' )
        {
            word[i]='.';
        }
    }
    for(int i=0;i<word.size();i++){
        if(word[i]!='.')
           cout<<"."<<word[i];
    }

    return 0;
}
