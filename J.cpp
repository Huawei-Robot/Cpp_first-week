/*#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, j, m;
    int sum, max, temp;
    int x, y, k;
    int head;
    cin >> n; //表示有多少组输入
        for (k = 1; k <= n; k++)
        {
            cin >> m >> temp; //m表示一组输入有多少个，temp存储当前输入
                max = sum = temp;
            head = 0;
            x = y = 1;
            for (i = 1; i < m; i++)
            {
                cin >> temp;
                if (sum + temp < temp) //sum如果小于零
                {
                sum = temp; //重新计算子序列
                head = i; //变更头结点
                }
                else
                {
                    sum += temp; //如果sum大于零我们继续增长子数列
                }
                if (sum > max) 
                {
                max = sum; //变更最大值
                x = head + 1; 
                y = i + 1;
                }
            }
            cout << "Case" << " " << k << ":" << endl;
            cout << max << " " << x << " " << y << endl;
            if (k != n)
                cout << endl; 
        }
    return 0;
}
*/