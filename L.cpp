#include <algorithm>
#include <iostream>
#include <string>
 #include <iomanip>
using namespace std;
struct pvratio
{
	double j;
	double c;
	double d;
}num[1010];
bool cmp(pvratio a ,pvratio b) {
	return a.d > b.d;
}
int main() {
	int m, n;
	while (true) {
		cin >> m >> n;
		if (m == -1 && n == -1)break;
		for (int i = 0; i < n; ++i) {
			cin >> num[i].j >> num[i].c;
			num[i].d = num[i].j / num[i].c;
		}
		sort(num, num + n, cmp);//用sort对结构体排序
		double maxBeans = 0.0;
		for (int i = 0; i < n; ++i) {
			if (m > num[i].c) {
				m -= num[i].c;
				maxBeans += num[i].j;
			}
			else {
				maxBeans +=  (num[i].d * m);
				break;
			}
		}
		cout << fixed << setprecision(3) << maxBeans << endl;
	}
	return 0;
}