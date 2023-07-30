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

bool binary_search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return binary_search(root->left, x);
    }
    else
    {
        return binary_search(root->right, x);
    }
}

int main()
{
    Node *root = take_input();
    if (binary_search(root, 26))
        cout << "Yes, Found in tree;" << endl;
    else
        cout << "No, Not found in tree;" << endl;
    return 0;
}
