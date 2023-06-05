#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x0=0;
	int y0=0;
	int x1, y1;
	int face=0;
	int left=0; int right=0; int turn=0;
	for (int i=0;i<n;i++)
	{
		cin>>x1>>y1;
		while (x0!=x1 and y0!=y1)
		{
			if (x0<x1)
			{
				if (face%4==0)
				{
					
				}
				else if (face%4==2)
				{
					turn++;
					face+=2;
				}
				else if (face%4==1)
				{
					left++;
					face--;
				}
				else if (face%4==3)
				{
					right++;
					face++;
				}
				x0++;
			}
			else if (x0>x1)
			{
				if (face%4==2)
				{
				}
				else if (face%4==0)
				{
					turn++;
					face+=2;
				}
				else if (face%4==1)
				{
					right++;
					face++;
				}
				else if (face%4==3)
				{
					left++;
					face--;
				}
				x0--;
			}
			if (y0<y1)
			{
				if (face%4==3)
				{
				
				}
				else if (face%4==1)
				{
					turn++;
					face+=2;
				}
				else if (face%4==0)
				{
					left++;
					face++;
				}
				else if (face%4==2)
				{
					right++;
					face--;
				}
				y0++;
			}
			else if (y0>y1)
			{
				if (face%4==1)
				{
					
				}
				else if (face%4==3)
				{
					turn++;
					face+=2;
				}
				else if (face%4==2)
				{
					left++;
					face--;
				}
				else if (face%4==0)
				{
					right++;
					face--;
				}
				y0--;
			}
		}
		x0=x1;
		y0=y1;
	}
	cout<<left<<" "<<right<<" "<<turn;
	return 0;
}

