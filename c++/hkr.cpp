#include<iostream>
using namespace std;

int sum(int a, int b)
{

	int total;
	total=a+b;
	return total;
}

int main()
{
	int x,y,s;

	cin>>x>>y;
	s=sum(x,y);
	cout<<s;


	return 0;
}
