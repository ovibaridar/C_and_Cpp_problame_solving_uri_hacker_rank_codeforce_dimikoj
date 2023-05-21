#include<bits/stdc++.h>
using  namespace std;
int main()
{

    int n,i,j,k,in;
    cin>>n;
    vector<int>arry;

    vector<int>arry1;

    vector<int>arry2;
    for(i=0; i<n; i++)
    {

        cin>>in;
        arry.push_back(in);
        arry1.push_back(in);

    }
    sort(arry.begin(),arry.end());

    for(i=0; i<arry.size(); i++)
    {

        for(j=0; j<arry1.size(); j++)
        {
            int coun=0;
            if(arry[i]==arry1[j])
            {

                if(arry2.size()==0)
                {
                    arry2.push_back(j);
                    break;
                }
                else
                {

                    for(k=0; k<arry2.size(); k++)
                    {
                        if(j==arry2[k])
                        {
                            coun++;
                        }
                    }
                    if(coun!=0)
                    {
                        coun=0;
                        continue;

                    }
                    else
                    {
                        arry2.push_back(j);
                        coun=0;
                        break;
                    }
                }

            }
        }

    }
    cout<<"short"<<endl;
    for(i=0; i<arry.size(); i++)
    {
        cout<<arry[i]<<" ";

    }

    cout<<"Position"<<endl;
    for(i=0; i<arry2.size(); i++)
    {
        cout<<"P"<<arry2[i]+1<<" |";

    }
    cout<<endl;
    for(i=0; i<n*4; i++)
    {
        cout<<"-";
    }
    cout<<endl;
    int sum=0;
    cout<<"0  |";
    for(i=0; i<arry.size()-1; i++)
    {

        sum+=arry[i];
        cout<<sum<<"  |";
    }

    return 0;
}
