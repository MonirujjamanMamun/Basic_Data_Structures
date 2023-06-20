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
        return;
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
void print_revers_list(Node *n)
{
    if (n == NULL)
        return;
    print_revers_list(n->next);
    cout << n->val << " ";
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
    print_revers_list(head);
    cout << endl;
    print_main_list(head);
    return 0;
}