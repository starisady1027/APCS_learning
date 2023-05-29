#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b[1000];
	int n=0;
	int top=0;
	int x;
	cin>>x;
	for (int i=0;i<x;i++)
	{
		cin>>a;
		for (int i=0;i<a.length();i++)
		{
			if (a[i]=='(')
			{
				b[top]='(';
				top++;
			}
			if (a[i]==')')
			{
				b[top]=' ';
				top--;
				n++;
			}
		}
		if (b[top] != ' ')
		{
			n=0;
		}
		cout<<n;
		n=0;
	}
	return 0;
}

