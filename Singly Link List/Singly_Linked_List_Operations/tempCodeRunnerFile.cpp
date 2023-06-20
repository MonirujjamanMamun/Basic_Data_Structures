
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = next;
//     }
// };

// void inser_a_link_list(Node *&head, int v)
// {
//     Node *newNode = new Node(v);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *tem = head;
//     while (tem->next != NULL)
//     {
//         tem = tem->next;
//     }
//     tem->next = newNode;
// };

// void print_link_list(Node *head)
// {
//     Node *tem = head;
//     while (tem != NULL)
//     {
//         cout << tem->val << " ";
//         tem = tem->next;
//     }
// }