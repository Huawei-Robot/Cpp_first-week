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
    cin >> n; //��ʾ�ж���������
        for (k = 1; k <= n; k++)
        {
            cin >> m >> temp; //m��ʾһ�������ж��ٸ���temp�洢��ǰ����
                max = sum = temp;
            head = 0;
            x = y = 1;
            for (i = 1; i < m; i++)
            {
                cin >> temp;
                if (sum + temp < temp) //sum���С����
                {
                sum = temp; //���¼���������
                head = i; //���ͷ���
                }
                else
                {
                    sum += temp; //���sum���������Ǽ�������������
                }
                if (sum > max) 
                {
                max = sum; //������ֵ
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