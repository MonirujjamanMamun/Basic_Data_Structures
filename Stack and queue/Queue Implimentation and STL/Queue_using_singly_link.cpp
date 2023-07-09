#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;
    void push(int v)
    {
        siz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        siz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return siz;
    }
    bool empty()
    {
        if (siz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue m;
    // m.push(10);
    // m.push(20);
    // m.push(30);
    // cout << m.size() << endl;
    // cout << m.front() << endl;
    // m.pop();
    // cout << m.front() << endl;
    // m.pop();
    // cout << m.front() << endl;
    // m.pop();
    // cout << m.size() << endl;
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