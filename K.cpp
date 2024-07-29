/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int n=0,max=0,temp=0;
	string arr[1010];
	vector<string> maxcolor;
	//string maxcolor[505];
	while (true) {
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		for (int j = 0; j < n; ++j) {
			temp = 0;
			if (!maxcolor.empty() && find(maxcolor.begin(),maxcolor.end(),arr[j])!=maxcolor.end())continue;
			for (int k = 0; k < n; k++) {
				if (arr[j] == arr[k]) {
					temp += 1;
				}
			}
			if (temp > max) {
				max = temp;
				maxcolor.clear();
				maxcolor.insert(maxcolor.end(), arr[j]);
			}
			else if (temp == max) {
				maxcolor.insert(maxcolor.end(),arr[j]);
			}
		}
		for (int final = 0; final < maxcolor.size(); final++) {
			cout << maxcolor[final] << endl;
			
		}
		maxcolor.clear();
	}
	return 0;

}
*/