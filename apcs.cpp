#include <bits/stdc++.h>
using namespace std;

int main()
{
	//f698
	string a;
	stack <int> s;
	while (cin>>a)
	{
		if (a=="+" or a=="-" or a=="*" or a=="/")
		{
			int fst = s.top();
			s.pop();
			int sec = s.top();
			s.pop();
			if (a=="+") s.push(fst+sec);
			else if (a=="-") s.push(sec-fst);
			else if (a=="*") s.push(fst*sec);
			else s.push(sec/fst);
		}
		else
		{
			s.push(stoi(a));
		}
	}
	cout<<s.top();
	return 0;
}

