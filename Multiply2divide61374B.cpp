#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int two=0;
		int three=0;
		int div2=2;
		int div3=3;
		while(1)
		{
			if(n%div2==0)
			{
				two++;
				div2=div2*2;
			}
			else
				break;
		}
		while(1)
		{
			if(n%div3==0)
			{
				three++;
				div3=div3*3;
			}
			else
			{
				break;
			}
		}
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else if(two>three)
		{
			cout<<"-1"<<endl;
		}
		else if(three==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			if((pow(2,two)*pow(3,three))==n)
			{
				int count=2*three-two;
				cout<<count<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
		t--;
	}
}