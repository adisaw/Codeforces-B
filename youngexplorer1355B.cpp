#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int t2=t;
	vector <int> ans;
	while(t>0)
	{
		int n;
		cin>>n;
		vector <int> num;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			num.push_back(temp);
		}
		sort(num.begin(),num.end());
		int nc=0;
		int grpsize=0;
		for(int i=0;i<n;i++)
		{
			
			
			if(grpsize+1>=num[i])
			{
				nc++;
				grpsize=0;

			}
			else
			{
				grpsize++;
			}
		}
		ans.push_back(nc);
		t--;
		
	}
	for(int i=0;i<t2;i++)
	{
		cout<<ans[i]<<endl;
	}
}