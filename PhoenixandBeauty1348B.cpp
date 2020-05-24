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
		set<int> s;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			s.insert(temp);
		}
		if(s.size()>k)
			cout<<"-1"<<endl;
		else
		{
			int ones=k-s.size();
			cout<<n*k<<endl;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<ones;j++)
				{
					cout<<"1 ";
				}
				auto it=s.begin();
				for(;it!=s.end();it++)
				{
					cout<<*it<<" ";
				}
			}
			cout<<endl;
		}
		t--;
	}
}