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
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return helper(1, n);
    }

private:
    vector<TreeNode*> helper(int start, int end) {
        vector<TreeNode*> all_trees;
        if (start > end) {
            all_trees.push_back(nullptr);
            return all_trees;
        }
        
        for (int i = start; i <= end; ++i) {
            vector<TreeNode*> left_trees = helper(start, i - 1);
            vector<TreeNode*> right_trees = helper(i + 1, end);
            
            for (auto* left : left_trees) {
                for (auto* right : right_trees) {
                    TreeNode* root = new TreeNode(i, left, right);
                    all_trees.push_back(root);
                }
            }
        }
        return all_trees;
    }
};
