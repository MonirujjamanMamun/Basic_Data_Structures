#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
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
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}
void insert_by_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
}
int main()
{

    return 0;
}