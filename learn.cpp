#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ans[1000]={0};
	int n;
	cin>>n;
	int sum1[1000]={0};
	sum1[0]=1;
	//1 4 16 64 256
	for (int power=1;power<=n;power++)
	{
		for (int j=0;j<=1000;j++)
		{
			if (sum1[j]*4>10)
			{
				sum1[j+1]=(sum1[j]*4)/10;
				sum1[j]=(sum1[j]*4)%10;
				break;
			}
			else
			{
				sum1[j]=sum1[j]*4;
				break;
			}
		}
	}
	
	return 0;
}
