#include <bits/stdc++.h>
using namespace std;

int main()
{
	//m371
	int a[100][100]={0};
	int r, c, m, n, i, j;
	cin >> m >> n;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}

	int ans = 0; bool check = true;

	while (check)
	{
		check = false;
		for (r=0;r<m;r++) for (c=0;c<n;c++)
		{
			if (a[r][c]==-1) continue;
			for (i=r+1;i<m && a[i][c]<0;i++);
			if (i<m && a[i][c]==a[r][c])
			{
				ans += a[i][c];
				a[i][c] = -1;
				a[r][c] = -1;
				check = true;
				continue;
			}
			for (j=c+1;j<n && a[r][j]<0;j++);
			if (j<n && a[r][j]==a[r][c])
			{
				ans += a[r][j];
				a[r][j] = -1;
				a[r][c] = -1;
				check = true;
				continue;
			}
		}
	}
	cout << ans;
	return 0;
}

