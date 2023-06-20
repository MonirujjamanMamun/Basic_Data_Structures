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

void normal_print(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}

void revers_print(Node *tail)
{
    Node *tem = tail;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->prev;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *tail = f;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    a->prev = head;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    f->prev = e;

    normal_print(head);
    revers_print(tail);

    return 0;
}