#include <bits/stdc++.h>
using namespace std;

int operate(vector<int>ans, char o)
{
	sum=0;
	for (int i=0;i<ans.size();i++)
	{
		sum+=ans[i];
	}
}


int main()
{
	//f698
	char a;
	int n=0;
	vector<int> ans;
	for (int i=0;i<4;i++)
	{
		cin>>a;
		if (a==int)
		{
			ans.push_back(a);
		}
		else if (a=='+')
		{
			ans.pop_back();
			ans.pop_back();
		}
		else if (a=='-')
		{
		}
		else if (a=='*')
		{
		}
		else if (a=='/')
		{
		}
	}
	return 0;
}

