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
		vector<int> arr(2*n);
		for(int i=0;i<2*n;i++)
		{
			cin>>arr[i];
		}
		vector<int> oddind;
		vector<int> evenind;
		for(int i=0;i<2*n;i++)
		{
			if(arr[i]%2==0)
			{
				evenind.push_back(i+1);
			}
			else
			{
				oddind.push_back(i+1);
			}
		}
		int count=0;
		for(int i=0;i<oddind.size();i=i+2)
		{
			if(i+1<oddind.size() && count<n-1)
			{
				cout<<oddind[i]<<" "<<oddind[i+1]<<endl;
				count++;
			}
		}
		for(int i=0;i<evenind.size();i=i+2)
		{
			if(i+1<evenind.size() && count<n-1)
			{
				cout<<evenind[i]<<" "<<evenind[i+1]<<endl;
				count++;
			}
		}
		t--;
	}
}