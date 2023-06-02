#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n=0;
	int ans=0;
	int x;
	cin>>x;
	for (int i=0;i<x;i++)
	{
		cin>>a;
		for (int j=0;j<a.length();j++)
		{
			if (a[j]=='(')
			{
				n++;
			}
			else if (a[j]==')')
			{
				if (n==0)
				{
					ans=0;
					break;
				}
				n--;
				ans++;
			}
		}
		if (n!=0)
		{
			ans=0;
		}
		cout<<ans<<endl;
		ans=0;
		n=0;
	}
	return 0;
}

