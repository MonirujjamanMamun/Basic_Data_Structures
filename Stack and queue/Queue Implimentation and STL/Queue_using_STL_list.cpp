#include <bits/stdc++.h>

using namespace std;

class myQueue
{
public:
    list<int> l;
    void push(int v)
    {
        l.push_back(v);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue m;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        m.push(a);
    }
    while (!m.empty())
    {
        cout << m.front() << endl;
        m.pop();
    }
    return 0;
}