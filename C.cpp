#include <iostream>
#include <cstdio>
#include <algorithm>
int f[10100];
int main() {
	int a, b, n,period=0;
	f[1] = 1;
	f[2] = 1;
	while (scanf("%d%d%d", &a, &b, &n) != EOF) {
		if (a == 0 && b == 0 && n == 0)
			break;
		int i;
		for (i = 3; i < 10100; i++) {
			f[i] = (f[i - 1] * a + f[i - 2] * b) % 7;
			if (f[i] == 1 && f[i - 1] == 1)	
				break;
		}
		// i-2ÎªÖÜÆÚ 
		n = n % (i - 2);
		f[0] = f[i - 2]; 
		printf("%d\n", f[n]);
	}
	return 0;
}
