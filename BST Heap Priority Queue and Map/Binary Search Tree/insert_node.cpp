#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *take_input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l;
        cin >> r;
        Node *Left;
        Node *Right;
        if (l == -1)
        {
            Left = NULL;
        }
        else
        {
            Left = new Node(l);
        }
        if (r == -1)
        {
            Right = NULL;
        }
        else
        {
            Right = new Node(r);
        }
        p->left = Left;
        p->right = Right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

void insert(Node *&root, int v)
{
    if (root == NULL)
    {
        root = new Node(v);
        return;
    }
    if (root->val > v)
    {
        if (root->left == NULL)
        {
            root->left = new Node(v);
        }
        else
        {
            insert(root->left, v);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(v);
        }
        else
        {
            insert(root->right, v);
        }
    }
}

int main()
{
    Node *root = take_input();
    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);
    print_level_order(root);

    return 0;
}
