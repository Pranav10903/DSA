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
    // vector<int> inorderTraversal(TreeNode* root) {
    //     if(!root)
    //     {
    //        return ans;
    //     }
    //     inorderTraversal(root->left);
    //     ans.push_back(root->val);
    //     inorderTraversal(root->right);
    //     return ans;
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* node = root;
        vector<int>inorder;
        while(1){
            if(node!=NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(!st.empty()){
                    node = st.top();
                    st.pop();
                    inorder.push_back(node->val);
                    node = node->right;
                }
                else
                {
                    break;
                }
            }
        }
        return inorder;
    }
};
