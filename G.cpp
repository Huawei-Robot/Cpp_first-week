#include <iostream>
using namespace std;

int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    while (true) {
        if (a == b) {  // 两者相遇的情况
            cout << "Yes";
            return 0;
        }

        if (a == x || b == y) {  // 任一达到终点
            break;
        }

        a = (a % n) + 1;  // 模拟循环前进
        b = (b - 2 + n) % n + 1;  // 模拟循环后退
    }

    cout << "No";
    return 0;
}
