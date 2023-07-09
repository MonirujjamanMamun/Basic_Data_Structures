#include <bits/stdc++.h>

using namespace std;

int main()
{

    queue<int> m;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        m.push(x);
    }
    while (!m.empty())
    {
        cout << m.front() << endl;
        m.pop();
    }

    return 0;
}