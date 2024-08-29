#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100001];
int main() {
	int n;
	cin >> n;
	while (n--)
	{
		int temp;
		cin >> temp;
		a[temp]++;
	}
	for (int i = 0; i <= 100000; ++i) {
		if (a[i] % 2) {
			cout << "Conan" << endl;
			return 0;
		}
	}
	cout << "Agasa" << endl;
	return 0;
}