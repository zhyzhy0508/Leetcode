/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tres;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        dfs(root,0,sum,tres,res);
        return res;
    }

    void dfs(TreeNode* root, int tsum, int sum, vector<int>& tres, vector<vector<int>>& res){
        tres.push_back(root->val);
        tsum += root->val;
        if(!root->left && !root->right){
            if(tsum == sum )
                res.push_back(tres);
        }
        else{
            if(root->left)
                dfs(root->left, tsum, sum, tres, res);
            if(root->right)
                dfs(root->right,tsum ,sum,tres, res);
        }
        tres.pop_back();


    }


};