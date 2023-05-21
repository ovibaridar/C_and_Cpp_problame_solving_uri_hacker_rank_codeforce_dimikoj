#include<bits/stdc++.h>
using  namespace  std;
int  main ()
{

    string  a;
    cin>>a;
    int i ,temp;
    char st;
    vector<int>num;

    for(i=0;i<a.size();i=i+2)
    {
        st=a[i];
        int st2 =(int)st;
        num.push_back(st2-48);

    }

    for(i=0;i<num.size();i++)
	{
		for(int j=i+1;j<num.size();j++)
		{
			if(num[i]>num[j])
			{
				temp  =num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
    for(i=0;i<num.size();i++){
        cout<<num[i];
        if(i != num.size()-1)
        {
            cout<<"+";
        }
    }
    return 0;
}
