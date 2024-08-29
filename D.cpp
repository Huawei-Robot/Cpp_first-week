#include <iostream>
#include <unordered_map>

using namespace std;

// 函数计算斐波那契数列模 3 的周期
int fibonacci() {
    int a = 7 % 3;  // F(0) % 3
    int b = 11 % 3; // F(1) % 3
    int c;
    int period = 0;

    while (true) {
        c = (a + b) % 3;
        a = b;
        b = c;
        period++;

        // 检查是否回到了初始状态
        if (a == 1 % 3 && b == 2 % 3) {
            break;
        }
    }

    return period;
}

// 计算 F(n) % 3
int fibonacciMod3(int n) {
    int period = fibonacci();

    // 将 n 映射到周期内
    n = n % period;

    int a = 7 % 3;
    int b = 11 % 3;
    int c;

    if (n == 0) return a;
    if (n == 1) return b;

    for (int i = 2; i <= n; ++i) {
        c = (a + b) % 3;
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n;
    while (cin >> n) {
        if (fibonacciMod3(n) == 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    return 0;
}
