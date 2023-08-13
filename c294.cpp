#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a0,b0,c0;
	cin>>a0>>b0>>c0;
	float arr[3]={a0,b0,c0};
	sort(arr, arr+3);
	for (int i=0;i<3;i++) cout<<arr[i]<<" ";
	cout<<endl;
	float a1 = arr[0];
	float b1 = arr[1];
	float c1 = arr[2];
	if (a1 + b1 > c1)
	{
		if (a1*a1 + b1*b1 == c1*c1) cout<<"Right";
		else if (a1*a1 + b1*b1 > c1*c1) cout<<"Acute";
		else cout<<"Obtuse";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
