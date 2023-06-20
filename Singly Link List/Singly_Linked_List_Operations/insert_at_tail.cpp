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

void inser_a_link_list(Node *&head, int v)
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
};

void print_link_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail:" << endl;
        cout << "Option 2: Print link list:" << endl;
        cout << "Option 3: Tarminet:";
        cout << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            inser_a_link_list(head, val);
        }
        else if (op == 2)
        {
            print_link_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}