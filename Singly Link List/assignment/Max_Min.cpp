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
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}
int max(Node *head)
{
    Node *tem = head;
    int max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}
int min(Node *head)
{
    Node *tem = head;
    int min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }
    return min;
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
    int maxValue = max(head);
    int minValue = min(head);
    cout << maxValue << " " << minValue << endl;
    return 0;
}