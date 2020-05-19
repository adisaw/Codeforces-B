#include<bits/stdc++.h>
using namespace std;
int max(int x,int y,int z)
{
	if(x>y && x>z)
		return x;
	else if(y>x && y>z)
		return y;
	else if(z>x && z>y)
		return z;
	return 0;

}
int min(int x,int y,int z)
{
	if(x<y && x<z)
		return x;
	else if(y<x && y<z)
		return y;
	else if(z<x && z<y)
		return z;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string x;
		cin>>x;
		int one=-1,two=-1,three=-1;
		int ans=1000000;
		int flag=0,dist;
		for(int i=0;i<x.length();i++)
		{
			if(x.at(i)=='1')
			{
				one=i;
			}
			else if(x.at(i)=='2')
			{
				two=i;
			}
			else if(x.at(i)=='3')
			{
				three=i;
			}

			if(one!=-1 && two!=-1 && three!=-1)
			{
				
				int mx=max(one,two,three);
				int mn=min(one,two,three);
				int dst=mx-mn+1;
				if(dst<ans)
					ans=dst;
				flag=1;

			}
		}
		if(flag==1)
			cout<<ans<<endl;
		else
			cout<<"0"<<endl;
		t--;
	}
}