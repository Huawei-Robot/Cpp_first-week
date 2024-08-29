#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;  // 输入结束条件

        unordered_map<string, int> colorCount;  // 哈希表来统计每种颜色的次数
        string color;
        int maxCount = 0;
        string mostPopularColor;

        // 读取每个气球的颜色并统计
        for (int i = 0; i < n; ++i) {
            cin >> color;
            colorCount[color]++;

            // 检查当前颜色是否为最受欢迎的颜色
            if (colorCount[color] > maxCount) {
                maxCount = colorCount[color];
                mostPopularColor = color;
            }
        }

        // 输出最受欢迎的气球颜色
        cout << mostPopularColor << endl;
    }

    return 0;
}
