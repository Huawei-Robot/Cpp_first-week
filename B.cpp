/*#include <iostream>
#include <string>
using namespace std;
int main() {
	int num,sum;
	cin >> num;
	if (num < 1 || num>100) {
		cout << "please enter a num belong [1,100]";
		return 0;
	}
	string s;
	for (int i{ 1 }; i <= num; ++i) {
		cin >> s;
		sum = 1;
		for (int j{ 0 }; j < s.length(); ++j) {	//ÿ����ĸ����һ����ĸ�Ƚ��Ƿ���ͬ����ͬ������һ����ͬ��ӡ
			if (s[j] == s[j + 1])
				sum++;
			else {
				if (sum == 1)
					cout << s[j];
				else {
					cout << s[j] << sum;
					sum = 1;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
*/