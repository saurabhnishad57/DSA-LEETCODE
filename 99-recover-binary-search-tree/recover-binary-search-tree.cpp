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
    TreeNode* prev=NULL;
    TreeNode* first=NULL;
    TreeNode* sec=NULL;
    void inorder(TreeNode* root){ //O(n)
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL && prev->val > root->val){
            if(first==NULL) first=prev;
            sec=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        //inorder=> first,sec
        //first and sec swap
        inorder(root);
        swap(first->val,sec->val);
    }
};