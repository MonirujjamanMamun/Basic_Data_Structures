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
void insert_any_pojition(Node *head, int p, int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    for (int i = 1; i <= p - 1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
    cout << "Insert at position " << p << endl;
}
void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_by_position(Node *head, int posi)
{
    Node *tem = head;
    for (int i = 1; i <= posi - 1; i++)
    {
        tem = tem->next;
    }
    Node *deleteNote = tem->next;
    tem->next = tem->next->next;
    delete deleteNote;
};
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Head is deleted";
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail:" << endl;
        cout << "Option 2: Print link list:" << endl;
        cout << "Option 3: insert at any pojition:" << endl;
        cout << "Option 4: insert at head:" << endl;
        cout << "Option 5: Deleate by position:" << endl;
        cout << "Option 6: Deleate form head:" << endl;
        cout << "Option 7: Tarminet:";
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
            int val, posi;
            cin >> val;
            cout << "Enter a value: " << endl;
            cin >> posi;
            cout << "Enter a Position: " << endl;
            if (posi == 0)
            {
                insert_head(head, val);
            }
            else
            {
                insert_any_pojition(head, posi, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cin >> val;
            insert_head(head, val);
        }
        else if (op == 5)
        {
            int posi;
            cout << "Enter Your position:";
            cin >> posi;
            delete_by_position(head, posi);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}