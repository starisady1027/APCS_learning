#include <bits/stdc++.h>
using namespace std;

int main()
{
	//f698
	string a;
	stack <int> ans;
	cin>>a;
	for (int i=0;i<a.length();i++)
	{
		int first = ans.top();
		ans.pop();
		int second = ans.top();
		ans.pop();
		if (a[i]=='+')
		{
			ans.push(first+second);
		}
		else if (a[i]=='-')
		{
			ans.push(first-second);
		}
		else if (a[i]=='*')
		{
			ans.push(first*second);
		}
		else if (a[i]=='/')
		{
			ans.push(first/second);
		}
		else
		{
			ans.push((int)a[i]-48);
		}
	}
	cout<<ans.top()<<endl;
	
	return 0;
}

