#include <bits/stdc++.h>
using namespace std;

int main()
{
	//f698
	string a;
	vector<unsigned int> num;
	int top=-1;
	int c=0;
	getline(cin, a);
	for (int i=0;i<a.length();i++)
	{
		if ((int)a[i]>=48 and (int)a[i]<=57)
		{
			num.push_back((int)a[i] - 48);
			top++;
		}
		if (a[i]=='+')
		{
			c = num[top] + num[top-1];
			num.pop_back();
			num.pop_back();
			num.push_back(c);
			top--;
			c=0;
		}
		if (a[i]=='-')
		{
			c = num[top] - num[top-1];
			num.pop_back();
			num.pop_back();
			num.push_back(c);
			top--;
			c=0;
		}
		if (a[i]=='*')
		{
			c = num[top] * num[top-1];
			num.pop_back();
			num.pop_back();
			num.push_back(c);
			top--;
			c=0;
		}
		if (a[i]=='/')
		{
			c = num[top] / num[top-1];
			num.pop_back();
			num.pop_back();
			num.push_back(c);
			top--;
			c=0;
		}
	}
	cout<<num[0];
	return 0;
}

