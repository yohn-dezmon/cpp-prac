// link: https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/928/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void helper(TreeNode *root, vector<int> &output)
    {
        if (root == nullptr)
            return;

        // it looks like root is a pointer... therefore should I add a reference to the pointer?
        // or should I just add the pointer itself?
        // you add the pointer, which essentially copies the memory address
        output.push_back(root->val);
        helper(root->left, output);
        helper(root->right, output);
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> output;

        // even though output is & within the fn definition, you can pass it in as output alone
        helper(root, output);

        return output;
    }
};
