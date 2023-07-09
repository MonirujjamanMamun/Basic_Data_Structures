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

Node *insert_list()
{
    Node *head = NULL;
    int val;
    cin >> val;
    while (val != -1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            // return;
        }
        else
        {
            Node *tem = head;
            while (tem->next != NULL)
            {
                tem = tem->next;
            }
            tem->next = newNode;
        }
        cin >> val;
    }
    return head;
}
void print(Node *head)
{
    Node *tem = head;
    while (true)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
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
    Node *list1 = insert_list();
    Node *list2 = insert_list();
    // while (true)
    // {
    //     cin >> val;
    //     if (val == -1)
    //         break;
    //     list1 = insert_list(head, val);
    //     list2 = insert_list(head, val);
    // }
    if (size(list1) == size(list2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}