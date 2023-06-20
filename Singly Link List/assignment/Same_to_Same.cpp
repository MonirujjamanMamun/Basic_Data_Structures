
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

int compare_list(Node *a, Node *b)
{
    int flag = 1;
    if (size(a) != size(b))
    {
        flag = 0;
    }
    else
    {
        while (a != NULL && b != NULL)
        {
            if (a->val != b->val)
            {
                flag = 0;
            }

            a = a->next;
            b = b->next;
        }
    }
    return flag;
}

Node *create_link_list()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    cin >> val;

    while (val != -1)
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

        cin >> val;
    }

    return head;
}

int main()
{

    Node *a = create_link_list();
    Node *b = create_link_list();
    int ans = compare_list(a, b);

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
