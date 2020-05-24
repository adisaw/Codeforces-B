#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==c && a>=b)
		{
			if(b+d==a)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else if(a==d && a>=b)
		{
			if(b+c==a)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;

		}
		else if(b==c && b>=a)
		{
			if(a+d==b)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else if(b==d && b>=a)
		{
			if(a+c==b)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		t--;
	}
}
