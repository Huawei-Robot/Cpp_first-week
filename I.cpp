/*#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int main() {
	int n, k, counts=0, i, j, x, y, a, ans;
	int b[110];
	cin >> n >> k;
	a = n;
	x = 0;
	while (a) {
		if (a % 2)
		{
			counts++;
		}
		b[x] = a % 2;
		x++;
		a /= 2;
	}
	if (k<counts || k>n)
	{
		cout<<"NO\n";
	}
	else {
		cout << "YES" << endl;
		if (counts == k)
		{
			for (i = 0; i < x; i++)
			{
				if (b[i])
				{
					ans = int(pow(2, i));
					cout << ans<<" ";
				}
			}
		}
		else
		{
			y = x - 1;
			while (counts != k)
			{
				while (b[y] >= 1)
				{
					b[y]--;
					b[y - 1] += 2;
					counts++;
					if (counts == k)
					{
						break;
					}
				}
				y--;
			}
			for (i = 0; i <= x-1; i++)
			{
				if (b[i] >= 1)
				{
					for (j = 0; j < b[i]; j++)
					{
						ans = int(pow(2, i));
						cout << ans<<" ";
					}
				}
			}
		}
	}
	return 0;
}
*/