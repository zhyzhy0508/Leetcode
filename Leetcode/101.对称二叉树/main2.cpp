#include <iostream>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
        Reverse(root->left);
        return isSame(root->left,root->right);
    }

private:
    TreeNode* Reverse(TreeNode* root)
    {
        if(root == NULL)
            return NULL;
        Reverse(root->left);
        Reverse(root->right);
        swap(root->left,root->right);
        return root;
    }
    bool isSame(TreeNode* root1, TreeNode* root2)
    {
        if(root1 == NULL && root2 == NULL)
            return true;
        if(root1 == NULL || root2 == NULL )
            return false;
        if(root1->val != root2->val)
            return false;
        return isSame(root1->left,root2->left) && isSame(root1->right, root2->right);


    }

};




int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
