#include <iostream>
#include <cstring>

using namespace std;

const int N = 100003;

int idx = 0;
int e[N], ne[N], h[N];

void insert(int num)
{
    int k = ((num % N) + N) % N;
    e[idx] = num;
    ne[idx] = h[k];
    h[k] = idx++;
}

bool find(int num)
{
    int k = ((num % N) + N) % N;
    for (int i = h[k]; h[k] != -1; k = ne[k])
    {
        if (e[i] == num)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int ops;
    char op[2];
    int num;
    memset(h, -1, N);
    scanf("%d", &ops);
    while (ops--)
    {
        scanf("%s %d", op, &num);
        if (*op == 'I')
        {
            insert(num);
        }
        else
        {
            if (find(num))
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
    }
    return 0;
}