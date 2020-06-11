#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,x,m;
		cin>>n>>x>>m;
		int arr[m][2];
		for(int i=0;i<m;i++)
		{
			cin>>arr[i][0]>>arr[i][1];
		}
		int start=x,end=x;
		for(int i=0;i<m;i++)
		{
			if(arr[i][0]<start && start<=arr[i][1])
				start=arr[i][0];
			if(arr[i][1]>end && end>=arr[i][0])
				end=arr[i][1];
		}
		int count=end-start+1;
		cout<<count<<endl;
		t--;


	}
}