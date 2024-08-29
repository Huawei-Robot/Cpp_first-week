#include <iostream>
using namespace std;
int main() {
	int times;
	cin >> times;
	while (times--)
	{
		int n, num;
		long long sum = 0;
		int max = -1;
		cin >> n;
		for (int i = 0; i < n;++i) {
			cin >> num;
			if (max < num)max = num;
			sum += num;
		}
		if (sum - max < max - 1) {
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}