#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;  // �����������

        unordered_map<string, int> colorCount;  // ��ϣ����ͳ��ÿ����ɫ�Ĵ���
        string color;
        int maxCount = 0;
        string mostPopularColor;

        // ��ȡÿ���������ɫ��ͳ��
        for (int i = 0; i < n; ++i) {
            cin >> color;
            colorCount[color]++;

            // ��鵱ǰ��ɫ�Ƿ�Ϊ���ܻ�ӭ����ɫ
            if (colorCount[color] > maxCount) {
                maxCount = colorCount[color];
                mostPopularColor = color;
            }
        }

        // ������ܻ�ӭ��������ɫ
        cout << mostPopularColor << endl;
    }

    return 0;
}
