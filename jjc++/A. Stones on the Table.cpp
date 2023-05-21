#include<bits/stdc++.h>
using namespace std;
int main(){

int countt=0,n;
cin>>n;
char word[n];
for(int i =0;i<n;i++){
    cin>>word[i];
}
for(int i = 0; i<n;i++){
        if(word[i]==word[i+1]){
            countt++;
        }
    }

cout<<countt;
return 0;
}
