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

void insert_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
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

void print_list(Node *head)
{
    Node *tem = head;
    if (tem == NULL)
        return;
    cout << tem->val << " ";
    print_list(tem->next);
}

int size(Node *head)
{
    Node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}

void mid(Node *head)
{
    Node *tem = head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    int m = (size(head) + 1) / 2;
    for (int i = 0; i < m - 1; i++)
    {
        tem = tem->next;
    }
    if (size(head) % 2 == 0)
    {
        cout << tem->val << " " << tem->next->val << endl;
    }
    else
    {
        cout << tem->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_list(head, tail, val);
    }
    mid(head);
    print_list(head);
    return 0;
}