#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/*
递归基本模式，用来理解递归序 (Basic recursive structure to understand recursion)
void f(TreeNode* head) {
    if (head == nullptr) {
        return; // 基础条件：当前节点为空时返回 (Base case: Return when the node is null)
    }
    // 1——第1次来到该节点
    f(head->left);  // 递归处理左子树 (Recursively process the left subtree)
    // 2——第2次来到该节点
    f(head->right); // 递归处理右子树 (Recursively process the right subtree)
    // 3——第3次来到该节点
}

前中后只是打印节点的的次序不同
任何一个非空节点都要来到3次，null节点只有1次
*/

// 先序打印所有节点，Recursive Pre-order traversal
void preOrder(TreeNode *head)
{
    if (head == nullptr)
    {
        return;
    }

    cout << head->val << "";
    preOrder(head->left);
    preOrder(head->right);
}

void inOrder(TreeNode *head)
{
    if (head == nullptr)
    {
        return;
    }

    inOrder(head->left);
    cout << head->val << "";
    inOrder(head->right);
}

void postOrder(TreeNode *head)
{
    if (head == nullptr)
    {
        return;
    }

    postOrder(head->left);
    postOrder(head->right);
    cout << head->val << "";
}

int main()
{
    // 构造一个二叉树 (Construct a binary tree)
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);
    head->right = new TreeNode(3);
    head->left->left = new TreeNode(4);
    head->left->right = new TreeNode(5);
    head->right->left = new TreeNode(6);
    head->right->right = new TreeNode(7);

    preOrder(head);
    cout << "先序遍历递归版 (Pre-order traversal: Recursive implementation)" << endl;

    inOrder(head);
    cout << "中序遍历递归版 (In-order traversal: Recursive implementation)" << endl;

    postOrder(head);
    cout << "后序遍历递归版 (Post-order traversal: Recursive implementation)" << endl;

    return 0;
}
