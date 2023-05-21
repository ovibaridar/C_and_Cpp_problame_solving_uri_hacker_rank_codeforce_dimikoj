#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int  n,i,j;
    cin>>n;
    int inputarry[n];
    for(i=0;i<n;i++){
        cin>>inputarry[i];
    }
    int sumofarry=0,diviingarray;
    for(i=0;i<n;i++){
        sumofarry = sumofarry+inputarry[i];
    }
    diviingarray = sumofarry/2;
    cout<<diviingarray;
    int let,equa=0,vsmall,aceptpoint=0,outputvalue=0,difaranceb=0;
    vector<int>mvalu;
    vector<int>mainvalu;
    int mainm=0;
    int m=0;
    let=inputarry[0];
    while(1){

            vsmall=0;
        for(i=0;i<n;i++){
           if(let==inputarry[i])
           {
               m++;

           }
          else{
            equa=0;
              equa=let+inputarry[i];
           mvalu.push_back(equa);

           }
        }

        vsmall=mvalu[0];

        for(j=0;j<mvalu.size();j++){
            if(vsmall<mvalu[j]){
                vsmall=mvalu[j];
            }
        }

        vsmall=let;

        mvalu.empty();

        if(vsmall>diviingarray){
            for(i=0;i<n;i++){
                mainm=vsmall-inputarry[i];
                mainvalu.push_back(mainm);
                mainm=0;
            }
            outputvalue=mainvalu[0];
            for(i=0;i<mainvalu.size();i++){
                if(outputvalue<mainvalu[i]){
                    outputvalue=mainvalu[i];
                }
            }
            difaranceb=diviingarray-outputvalue;
            break;

        }

    }
    return 0;
}
