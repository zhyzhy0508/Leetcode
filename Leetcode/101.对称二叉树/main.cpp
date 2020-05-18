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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return isMorror(root->left,root->right);


    }
private:
    bool isMorror(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL )
            return true;
        if(root1 == NULL || root2 == NULL )
            return false;
        if(root1->val != root->val)
            return false;
        return isMorror(root1->left,root2->right) && isMorror(root1->right,root2->left);


    }


};

int main()
{

    return 0;
}
