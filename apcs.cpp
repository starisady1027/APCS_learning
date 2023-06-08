#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int n=0;
	vector<int> ans;
	while (cin>>a)
	{
		if (n==5) break;
		ans.push_back(a);
		n++;
	}
	for (int i=0;i<ans.size();i++)
	{
		cout<<(char)ans[i]<<endl;
	}
	return 0;
}

