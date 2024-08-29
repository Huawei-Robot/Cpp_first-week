#include <iostream>
#include <string>
using namespace std;

// 函数：解密并输出字符串
void report(const string& str) {
    for (int i = 0, j = 1; i < str.length(); ++j) {
        cout << str[i]; // 输出当前字符
        i += j;         // 根据 j 的值跳转到下一个字符位置
    }
    cout << endl; // 输出完成后换行
}

int main() {
    int size;
    string str;

    // 读取输入
    cin >> size >> str;

    // 调用解密函数
    report(str);

    return 0;
}
