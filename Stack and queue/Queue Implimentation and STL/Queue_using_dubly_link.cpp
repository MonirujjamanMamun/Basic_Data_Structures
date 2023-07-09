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
    }
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