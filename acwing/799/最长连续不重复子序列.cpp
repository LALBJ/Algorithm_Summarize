// 先写暴力写法，再找单调关系使得复杂度下降
#include <iostream>

using namespace std;

const int N = 100010;

int a[N], q[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int res = 0;
    for (int i = 0, j = 0; j < n; j++)
    {
        q[a[j]]++;
        while (q[a[j]] > 1)
        {
            q[a[i]]--;
            i++;
        }
        res = max(res, j - i + 1);
    }

    printf("%d", res);
    return 0;
}