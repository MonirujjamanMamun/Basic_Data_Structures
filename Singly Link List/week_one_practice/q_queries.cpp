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
void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_any_position(Node *&head, int v, int p)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    for (int i = 0; i < p - 1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
}
void insert_list(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void print(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_list(head, val);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_head(head, val);
            print(head);
            cout << endl;
        }
        else if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos <= size(head))
        {
            insert_any_position(head, val, pos);
            print(head);
            cout << endl;
        }
    }
    return 0;
}