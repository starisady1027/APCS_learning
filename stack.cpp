#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	int n=0;
	int top=0;
	bool clear=false;
	int x;
	cin>>x;
	for (int i=0;i<x;i++)
	{
		cin>>a;
		for (int j=0;j<a.length();j++)
		{
			if (a[j]=='(')
			{
				b[top]='(';
				top++;
			}
			if (a[j]==')' and top!=0 and b[top]=='(')
			{
				top--;
				n++;
			}
		}
		for (int i=0;i<a.length();i++)
		{
			if (b[i]=='(' or b[i]==')')
			{
				clear=true;	
			}
		}
		if (clear==true)
		{
			n=0;
		}
		cout<<n;
		clear=false;
		b="";
		top=0;
		n=0;
	}
	return 0;
}

