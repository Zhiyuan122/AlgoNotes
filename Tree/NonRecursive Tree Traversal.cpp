#include <iostream>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/*具体步骤：
    创建一个栈
    压入头节点
        每次弹出一个节点，先压右，再压左

大致思路：先把头节点放到栈里，只要栈不为空，就往外弹一个打印，每弹一个再把弹出节点的右树，左树放进来

*/
void preOrder(TreeNode *head)
{
    if (head != nullptr)
    {
        stack<TreeNode *> stcak; // 创建一个栈用来存放节点（TN类型的指针）
        stack.push(head);        // 压入头节点
        while (!stack.empty())
        {
            head = stack.top();
            stack.pop();
            cout << head->val << "";
            if (head->right != nullptr)
                stack.push(head->right);
            if (head->left != nullptr)
                stack.push(head->left);
        }
        cout << endl; // 换行
    }
}

// 中序遍历（非递归）(In-order traversal: Iterative version)
/*
步骤：
1. 子树头的所有左边界进栈直至完
2. 栈弹出最上节点，打印，将该节点的右子树令为新header重复步骤1
3. 直到没有子树且栈为空时停止

思路：
header从根节点开始，一直往子树的左节点移动，并把header标记的点移动到栈内
当header为空的时候，弹出栈顶元素，令栈顶元素的右子节点（header往右边走）


*/
void inOrder(TreeNode *head)
{
    if (head != nullptr) // 首先判断树存不存在
    {
        stack<TreeNode *> stack;
        while (!stack.empty() || head != nullptr) // 这个条件怎么翻译会不会存在stack不为空
        // 非递归版本需要用 while 循环模拟递归逻辑。
        // 循环条件是：栈不为空或者当前节点不为空
        {
            // Step1,2如下，这是关键
            if (head != nullptr)
            {
                stack.push(head);
                head = head->left;
            }
            else
            {
                head = stack.top();
                stack.pop();
                cont << head->val << "" head = head->right;
            }
        }
        cout << endl;
    }
}
/*
后序遍历
先序：中左右
先‘（stack）：中右左
后序（collect）：左右中——先’的逆运算

*/
void postOrderTwoStack(TreeNode *head)
{
    if (head != nullptr)
    {
        stack<TreeNode *> stack, collect;
    }
}
/*
void preOrder(TreeNode* head){
    if (head != nullptr){
        stack<TreeNode*> stack;
        stack.push(head);
        while(!stack.empty()){
            head = stack.top();
            stack.pop();
            cout << head->val << "";
            if (head->right != nullptr) stack.push(head->right);
            if (head->left != nullptr) stack.push(head ->left);
        }
        cout << endl;
    }

}
后：左右中
前：中左右
前‘：中右左
先判断树为不为空
不为空建立栈
把head先推进去
在栈不为空的情况下，把head当成指针
推左推头
void postOrderTwoStack(TreeNode* head){
    if (head != nullptr){
        stack<TreeNode*> stack, collect;
        stack.push(head);
        while (!stack.empty()){
            head = stack.top();
            stack.pop();
            collect.push(head);//原本相当于这里是打印

            if (head->left != nullptr) stack.push(head->left);
            if (head->right != nullptr) stack.push(head->right);

        }

        while (!collect.empty()){
            cout << collect.top() -> val << "";
            collect.pop();
        }


    }


}


*/