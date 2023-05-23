#include <bits/stdc++.h>
using namespace std;
int main()
{
	int S, M, L;
	int car_amount;
	cin>>S>>M>>L>>car_amount;
	int car_weights[car_amount];
	int car_park[S+M+L];
	int Slot[S], Mlot[M], Llot[L];
	for (int i=0;i<car_amount;i++)
	{
		cin>>car_weights[i];
	}
	for (int i=0;i<car_amount;i++)
	{
		if (1<=car_weights[i]<=199)
		{
			for (int j=0;j<S;j++)
			{
				Slot[j] = car_weights[i];
			}
		}
		else if (200<=car_weights[i]<=499)
		{
			for (int j=0;j<M;j++)
			{
				Mlot[j] = car_weights[i];
			}
		}
		else if (car_weights[i]>=500)
		{
			for (int j=0;j<L;j++)
			{
				Llot[j] = car_weights[i];
			}
		}
	}
	for (int j=0;j<S;j++)
	{
		cout<<Slot[j]<<" ";
	}
	for (int j=0;j<M;j++)
	{
		cout<<Mlot[j]<<" ";
	}
	for (int j=0;j<L;j++)
	{
		cout<<Llot[j]<<" ";
	}
	return 0;
}
