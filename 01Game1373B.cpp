#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string str;
		cin>>str;
		int zero=0,one=0;
		for(int i=0;i<str.size();i++)
		{
			if(str.at(i)=='0')
				zero++;
			else
				one++;
		}
		int mini=min(zero,one);
		if(mini%2==0)
		{
			cout<<"NET"<<endl;
		}
		else
		{
			cout<<"DA"<<endl;
		}
		t--;
	}
	return 0;
}