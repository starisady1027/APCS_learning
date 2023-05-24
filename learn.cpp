#include <bits/stdc++.h>
using namespace std;
int main()
{
	int S, M, L;
	int car_amount;
	cin>>S>>M>>L>>car_amount;
	int car_weights[car_amount];
	int s=0,m=0,l=0;
	for (int i=0;i<car_amount;i++)
	{
		cin>>car_weights[i];
	}
	for (int i=0;i<car_amount;i++)
	{
		if (1<=car_weights[i]<=199)
		{
			if (s<S)
			{
				s++;
			}
			else if (m<M)
			{
				m++;
			}
			else if (l<L)
			{
				l++;
			}
		}
		else if (200<=car_weights[i]<=499)
		{
			if (m<M)
			{
				m++;
			}
			else if (l<L)
			{
				l++;
			}
		}
		else
		{
			if (l<L)
			{
				l++;
			}
		}
	}
	cout<<s<<m<<l;
	return 0;
}
