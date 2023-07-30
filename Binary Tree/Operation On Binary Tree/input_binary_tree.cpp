// #include <bits/stdc++.h>

// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *take_input()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//         root = NULL;
//     else
//         root = new Node(val);
//     queue<Node *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         // 1. ber kora anta hobe
//         Node *p = q.front();
//         q.pop();

//         // 2. jabotio kaj korta hobe
//         int l, r;
//         cin >> l >> r;
//         Node *left;
//         Node *right;
//         if (l == -1)
//             left = NULL;
//         else
//             left = new Node(l);
//         if (r == -1)
//             right = NULL;
//         else
//             right = new Node(r);

//         p->left = left;
//         p->right = right;

//         // 3. children ace ki na check korta hobe
//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
//     return root;
// }

// void print_tree(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         // 1. ber kora ana
//         Node *f = q.front();
//         q.pop();

//         // 2. jabotio kaj kora
//         cout << f->val << " ";

//         // 3. left right null ki na check kora
//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }
// int main()
// {

//     Node *root = take_input();
//     print_tree(root);
//     return 0;
// }

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
    if (root)
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
int main()
{
    Node *root = take_input();
    print(root);
    return 0;
}