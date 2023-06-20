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
void normal_print(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
};
void revers_print(Node *tail)
{
    Node *tem = tail;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->prev;
    }
};
void delete_any_position(Node *head, int pos)
{
    Node *tem = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tem = tem->next;
    }
    Node *deleteNode = tem->next;
    tem->next = tem->next->next;
    tem->next->prev = tem;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void delete_tail(Node *&tail)
{
    Node *deleteTail = tail;
    tail = tail->prev;
    delete deleteTail;
    tail->next = NULL;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    a->prev = head;
    b->prev = a;
    c->prev = b;

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head))
    {
        delete_tail(tail);
    }
    else
    {
        delete_any_position(head, pos);
    }

    normal_print(head);
    revers_print(tail);
    return 0;
}