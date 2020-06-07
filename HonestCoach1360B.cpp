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
		vector<int > num;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			num.push_back(temp);
		}
		sort(num.begin(),num.end());
		int min=num[1]-num[0];
		for(int i=2;i<n;i++)
		{
			int dif=num[i]-num[i-1];
			if(dif<min)
			{
				min=dif;
			}
		}
		cout<<min<<endl;
		t--;
	}
}