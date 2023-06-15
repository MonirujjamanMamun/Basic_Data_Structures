#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int vale;
    Node *next;
    Node(int vale)
    {
        this->vale = vale;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}

void print_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->vale << " ";
        tem = tem->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert vale at list" << endl;
        cout << "Option 2: Print list" << endl;
        cout << "Option 3: Terminet" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}