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
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int counteven=0;
		int countodd=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(arr[i]%2==1)
				{
					countodd++;
				}
			}
			if(i%2==1)
			{
				if(arr[i]%2==0)
				{
					counteven++;
				}
			}
			
		}
		if(counteven==countodd)
			{
				cout<<countodd<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		t--;
	}
}