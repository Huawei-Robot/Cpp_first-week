#include <iostream>
using namespace std;

int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    while (true) {
        if (a == b) {  // �������������
            cout << "Yes";
            return 0;
        }

        if (a == x || b == y) {  // ��һ�ﵽ�յ�
            break;
        }

        a = (a % n) + 1;  // ģ��ѭ��ǰ��
        b = (b - 2 + n) % n + 1;  // ģ��ѭ������
    }

    cout << "No";
    return 0;
}
