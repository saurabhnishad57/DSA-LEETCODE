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
    bool check(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL){
            return true;
        }else if(l==NULL || r==NULL){
            return l==r;
        }
        return l->val==r->val && check(l->left,r->right) && check(r->left,l->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return false;
        bool ans=check(root->left,root->right);
        return ans;
    }
};