/*
#include <iostream>
#include <string>

constexpr int f0{ 7 };
constexpr int f1{ 11 };

long int Fibonacci(int n) {
	if (n > 1) {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	else if (n == 1)
		return f1;
	else if (n == 0)
		return f0;
}

int main() {
	using namespace std;
	string i;
	int n;
	while (true) {
		cin >> i;
		if (i == "exit")
			break;
		else
			n = stoi(i,0, 10);
		if (Fibonacci(n) % 3 == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	return 0;
}
*/