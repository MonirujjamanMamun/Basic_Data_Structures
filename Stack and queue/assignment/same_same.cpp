#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;
    };
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->pre = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myStck
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;
    };
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->pre;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int front()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    stack<int> a;
    queue<int> b;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    bool flag = true;
    if (a.size() != b.size())
    {
        flag = false;
    }
    else
    {
        while (!a.empty())
        {
            if (a.top() != b.front())
            {
                flag = false;
            }
            a.pop();
            b.pop();
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}