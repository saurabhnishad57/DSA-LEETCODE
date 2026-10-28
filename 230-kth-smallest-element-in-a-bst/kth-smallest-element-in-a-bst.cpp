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
// class Solution {
// public:
//     void inorder(TreeNode* root,vector<int> &ans){
//         if(root!=NULL){
//             inorder(root->left,ans);
//             ans.push_back(root->val);
//             inorder(root->right,ans);
//         }
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         if(root==NULL) return 0;
//         vector<int> ans;
//         inorder(root,ans);
//         return ans[k-1];
//     }
// };

class Solution {
public:
    int prevOrder=0;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return -1;
        //left
        if(root->left!=NULL){
            int leftAns=kthSmallest(root->left,k);
            if(leftAns!=-1) return leftAns;
        }
        //root
        if(prevOrder+1==k){
            return root->val;
        }
        prevOrder+=1;
        //right
        if(root->right!=NULL){
            int rightAns=kthSmallest(root->right,k);
            if(rightAns!=-1) return rightAns;
        }
        return -1;
    }
};