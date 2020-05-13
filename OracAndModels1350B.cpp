#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count;
	cin>>count;
	while(count>0)
	{
		int t;
		cin>>t;
		vector <int> num;
		num.push_back(-1);
		for(int i=0;i<t;i++)
		{
			int temp;
			cin>>temp;
			num.push_back(temp);
		}
		
		int arr[t+1];
		for(int i=0;i<t+1;i++)
		{
			arr[i]=1;
		}
		arr[1]=1;
		for(int i=2;i<num.size();i++)
		{
			vector <int> temp;
			for(int j=1;j<=sqrt(i);j++)
			{
				if(i%j==0 && num[i]>num[j])
				{
					if(arr[j]+1>arr[i])
					{
						arr[i]=arr[j]+1;
					}
				
				}
				if(i%j==0)
				{
					if(i/j!=j && i/j!=i)
					{
						temp.push_back(i/j);
					}
				}
				
			}
			for(int k=0;k<temp.size();k++)
			{
				if(i%temp[k]==0 && num[i]>num[temp[k]])
				{
					if(arr[temp[k]]+1>arr[i])
					{
						arr[i]=arr[temp[k]]+1;
					}
				
				}
			}
		}
		int max=0;
		for(int i=1;i<=t;i++)
		{
			
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		cout<<max<<endl;
		count--;
	}
}

