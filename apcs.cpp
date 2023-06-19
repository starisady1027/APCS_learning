#include <bits/stdc++.h>
using namespace std;

int main()
{
	//f698
	string a;
	getline(cin,a);
	stack <int> ans;
	for (int i=0;i<a.length();i++)
	{
		if (a[i]=='+' or a[i]=='-' or a[i]=='*' or a[i]=='/')
		{
			if (ans.size()>1)
			{
				int fst = ans.top();
				ans.pop();
				int sec = ans.top();
				ans.pop();
				switch (a[i])
				{
					case '+':
						ans.push(fst+sec);
						break;
					case '-':
						ans.push(fst-sec);
						break;
					case '*':
						ans.push(fst*sec);
						break;
					case '/':
						if (sec!=0) ans.push(fst/sec);
						break;
				}	
			}
		}
		else if ((int)a[i]>=48 and (int)a[i]<=57)
		{
			ans.push((int)a[i]-48);
		}
	}
	cout<<ans.top();
	
	return 0;
}

