#include<bits/stdc++.h>
using namespace std;
int main(){
string word;
cin>>word;


vector<char>word2;


for(int i =0;i<word.size();i++){
    char c=word[i];
    int countt=0;
    for(int j=0;j<word2.size();j++){
        char C = word2[j];
        if(c == C){
            countt++;
        }
    }
    if(countt==0){
        word2.push_back(c);
    }
}
if(word2.size()%2==0){
    cout<<"CHAT WITH HER!";
    return 0;
}
cout<<"IGNORE HIM!";
return 0;
}
