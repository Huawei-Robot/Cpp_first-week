/*#include<iostream>
#include<algorithm>
int main() {
	int a[100000], n;
	std::cin >> n;
	for (int i{ 0 }; i < n; i++) {
		std::cin >> a[i];
	}
	std::sort(a, a + n);
	if (n == 2)
		std::cout << 0 << std::endl;
	else
		std::cout << std::min(a[n - 2] - a[0], a[n - 1] - a[1]) << std::endl;
	return 0;

}*/