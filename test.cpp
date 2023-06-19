#include <bits/stdc++.h>
using namespace std;

int main() {
	stack <int> ans;
	int a = 9;
	ans.push(a);
	ans.push(1);
	cout<<ans.top()<<endl;
	ans.pop();
	cout<<ans.empty();
}
