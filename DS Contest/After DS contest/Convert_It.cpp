// #include <iostream>
// #include <queue>
// using namespace std;

#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

// Function to build the binary tree from level order traversal
TreeNode *buildTree(vector<int> &levelOrder)
{
    if (levelOrder.empty() || levelOrder[0] == -1)
    {
        return nullptr;
    }

    int n = levelOrder.size();
    vector<TreeNode *> nodes(n);

    for (int i = 0; i < n; i++)
    {
        if (levelOrder[i] != -1)
        {
            nodes[i] = new TreeNode(levelOrder[i]);
        }
    }

    int parentIdx = 0;
    for (int i = 1; i < n; i += 2)
    {
        while (parentIdx < n && levelOrder[parentIdx] == -1)
        {
            parentIdx++;
        }

        if (i + 1 < n && levelOrder[i + 1] != -1)
        {
            nodes[parentIdx]->left = nodes[i + 1];
        }

        if (i + 2 < n && levelOrder[i + 2] != -1)
        {
            nodes[parentIdx]->right = nodes[i + 2];
        }

        parentIdx++;
    }

    return nodes[0];
}

// Function to do the operations on the binary tree
void performOperations(TreeNode *root, int Q)
{
    priority_queue<int> pq;

    // Insert all the node values in the priority queue
    function<void(TreeNode *)> inorder = [&](TreeNode *node)
    {
        if (!node)
        {
            return;
        }

        inorder(node->left);
        pq.push(node->val);
        inorder(node->right);
    };

    inorder(root);

    while (Q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int value;
            cin >> value;
            pq.push(value);
        }
        else if (type == 2)
        {
            int maxVal = pq.top();
            pq.pop();
            cout << maxVal << endl;
        }
    }
}

int main()
{
    vector<int> levelOrder;
    int num;
    while (cin >> num)
    {
        levelOrder.push_back(num);
    }

    int Q;
    cin >> Q;

    TreeNode *root = buildTree(levelOrder);
    performOperations(root, Q);

    return 0;
}
