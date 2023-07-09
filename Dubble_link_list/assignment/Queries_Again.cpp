#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

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
void insert_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tem = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tem;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void normal_print(Node *head)
{
    Node *tem = head;
    if (head == 0)
    {
        return;
    }
    else
    {
        cout << "L -> ";
        while (tem != NULL)
        {
            cout << tem->val << " ";
            tem = tem->next;
        }
    }
    cout << endl;
};
void revers_print(Node *head)
{
    Node *tem = head;
    if (head == 0)
    {
        return;
    }
    else
    {
        cout << "R -> ";
        while (tem != NULL)
        {
            cout << tem->val << " ";
            tem = tem->prev;
        }
    }
    cout << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            normal_print(head);
            revers_print(tail);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
            normal_print(head);
            revers_print(tail);
        }
        else
        {
            insert_any_position(head, pos, val);
            normal_print(head);
            revers_print(tail);
        }
    }
    return 0;
}