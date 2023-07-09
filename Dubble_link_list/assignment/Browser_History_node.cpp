#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *pre;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_list(Node *&head, Node *&tail, string v)
{
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
void print_main_list(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_main_list(n->next);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert_list(head, tail, val);
    }
    int n;
    cin >> n;
    while (n--)
    {
        string val;
        cin >> val;
        cout << val << endl;
        }

    // print_main_list(head);
    return 0;
}