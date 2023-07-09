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
void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_main_list(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_main_list(n->next);
}

void revers_list(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    revers_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *newHead = NULL;
    Node *newTail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_list(head, tail, val);
        insert_list(newHead, newTail, val);
    }
    revers_list(newHead, newHead);
    bool isPalin = true;
    Node *tem = head;
    Node *tem2 = newHead;
    while (tem != NULL)
    {
        if (tem->val != tem2->val)
        {
            isPalin = false;
        }
        tem = tem->next;
        tem2 = tem2->next;
    }
    if (isPalin)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}