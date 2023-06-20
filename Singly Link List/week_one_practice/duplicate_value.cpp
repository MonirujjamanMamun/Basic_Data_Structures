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

void insert_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
    cout << endl;
}

int count_list(Node *head)
{
    int flag = 0;
    while (head != NULL)
    {
        flag++;
        head = head->next;
    }
    return flag;
}

int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_list(head, val);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {

            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
        cout << endl;
    }
    bool flag = false;
    // while (head != NULL)
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        if (i->val > i->next->val)
        {

            flag = true;
        }
        // head = head->next;
    }
    // print(head);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}