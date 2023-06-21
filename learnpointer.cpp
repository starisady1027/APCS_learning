#include <bits/stdc++.h>
using namespace std;

void discount(double &p1, double &p2)
{
	if (p1 == p2)
	{
		p2 *= 0.5;
	}
}


int main()
{
	double p1, p2;
	cout<<"Original price:"<<endl;
	cin>>p1>>p2;
	discount(p1, p2);
	cout<<"Price after discount:"<<endl;
	cout<<p1<<" "<<p2;
	return 0;
 } 
