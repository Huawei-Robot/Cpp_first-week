#include <iostream>
#include <string>
using namespace std;

// ���������ܲ�����ַ���
void report(const string& str) {
    for (int i = 0, j = 1; i < str.length(); ++j) {
        cout << str[i]; // �����ǰ�ַ�
        i += j;         // ���� j ��ֵ��ת����һ���ַ�λ��
    }
    cout << endl; // �����ɺ���
}

int main() {
    int size;
    string str;

    // ��ȡ����
    cin >> size >> str;

    // ���ý��ܺ���
    report(str);

    return 0;
}
