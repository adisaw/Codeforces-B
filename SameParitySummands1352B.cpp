#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		if(n%2==0)
		{
			if(n>=k)
			{
				if(k%2==0)
				{
					int last=n-(k-1);
					cout<<"YES"<<endl;
					for(int i=0;i<k-1;i++)
					{
						cout<<"1 ";
					}
					cout<<last<<endl;
				}
				if(k%2==1)
				{
					int quo=n/k;
					if(quo<=1)
					{
						cout<<"NO"<<endl;
					}
					else
					{
						int last=n-(k-1)*2;
						cout<<"YES"<<endl;
						for(int i=0;i<k-1;i++)
						{
							cout<<"2 ";
						}
						cout<<last<<endl;
					}
				}
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if(n%2==1 && k%2==1)
		{
			if(n>=k)
			{
				int last=n-(k-1);
				cout<<"YES"<<endl;
				for(int i=0;i<k-1;i++)
				{
					cout<<"1 ";
				}
				cout<<last<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}

		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
}