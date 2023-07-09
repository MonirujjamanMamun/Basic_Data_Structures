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
    if (tem == NULL)
        return;
    cout << tem->val << " ";
    print(tem->next);
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
    int siz = size(head) / 2;
    Node *tem = head;
    if (size(head) % 2 == 0)
    {
        for (int i = 0; i < siz - 1; i++)
        {
            tem = tem->next;
        }
        cout << tem->val << " " << tem->next->val << endl;
    }
    else
    {
        for (int i = 0; i < siz; i++)
        {
            tem = tem->next;
        }
        cout << tem->val << endl;
    }
    // cout << siz << endl;
    // print(head);
    return 0;
}