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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postOrder;
        if(root==NULL){
            return postOrder;
        }
        stack<TreeNode*>st;
        TreeNode* current = root;
        while(current!=NULL || !st.empty()){
            if(current!=NULL){
                st.push(current);
                current = current->left;
            }
            else{
                TreeNode* temp = st.top()->right;
                if(temp==NULL){
                    temp = st.top();
                    st.pop();
                postOrder.push_back(temp->val);
                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    postOrder.push_back(temp->val);
                }
                }
                else current = temp;
            }
        } return postOrder;
    }
};
