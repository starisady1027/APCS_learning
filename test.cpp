#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	a^=b^=a^=b;
	cout<<a<<" "<<b;
	return 0;
}
