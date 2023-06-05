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
		if (car_weights[i]<200)
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
		else if (car_weights[i]<500)
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
	cout<<s+m+l;
	return 0;
}
