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
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(v);
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
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

void print(Node *root)
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
void insert_in_bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_in_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_in_bst(root->right, x);
        }
    }
}
int main()
{
    Node *root = take_input();
    print(root);
    insert_in_bst(root, 9);
    cout << endl;
    print(root);
    return 0;
}