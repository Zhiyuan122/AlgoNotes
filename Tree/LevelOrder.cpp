#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder1(TreeNode *head)
{

    vector<vector<int>> ans;
    if (head != nullptr)
    {
        queue<TreeNode *> q;                             // 新建队列Q
        unordered_map<TreeNode *, int> levels_hashtable; // 新建哈希表levels

        q.push(head); // 入队列的同时在表中登记层数的信息
        levels_hashtable[root] = 0;

        // 使用 while 循环处理队列中的节点。循环条件是队列非空：
        while (!q.empty())
        {
            TreeNode *cur = queue.front(); // 获取当前要处理的节点
            queue.pop();                   // 弹出

            // 对于当前的节点，我们要获取它的层数
            int level = levels_hashtable[cur];
            if (ans.size() == level)
            {
                ans.push_back(vector<int>()) // vector<int>() 是一个匿名的 vector<int> 对象，表示一个空的整数向量（如 []）
            }
            ans[level].push_back(cur->val);

            // 左右节点
            if (cur->left != nullptr)
            {
                queue.push(cur->left);
                levels_hashtable[cur->left] = level + 1;
            }

            if (cur->right != nullptr)
            {
                queue.push(cur->right);
                levels_hashtable[cur->rught] = level + 1;
            }
        }
    }
}