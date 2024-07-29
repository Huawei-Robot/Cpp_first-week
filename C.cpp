/*#include <iostream>
constexpr int f1{1};
constexpr int f2{1};
long qiufn(int a,int b,int n) {
	if (n >= 3) {
		return (a * qiufn(a, b, n - 1) + b * qiufn(a, b, n - 2)) % 7;
	}
	else
		return 1;
}
int main() {
	int a,b;
	int n;
	while (true) {
		std::cin >> a >> b >> n;
		if (a == 0 && b == 0 && n == 0) {
			break;
		}
		else
			std::cout<<qiufn(a, b, n)<<std::endl;
	}


	return 0;
}*/