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
void sort_list(Node *head)
{

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
}
void uniqe_list(Node *head)
{
    Node *tem = head;
    while (tem->next != NULL)
    {
        if (tem->val == tem->next->val)
        {
            tem->next = tem->next->next;
        }
        if (tem->next == NULL)
            break;
        else if (tem->val != tem->next->val)
        {
            tem = tem->next;
        }
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
    sort_list(head);
    uniqe_list(head);
    print_main_list(head);

    return 0;
}