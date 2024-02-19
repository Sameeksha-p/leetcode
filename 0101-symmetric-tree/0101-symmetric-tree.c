/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool helper(struct TreeNode *left, struct TreeNode *right) {
    if (left && !right || !left && right)
        return false;

    if (!left && !right)
        return true;

    if (left->val != right->val)
        return false;
    else
        return helper(left->left, right->right) && helper(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
    return helper(root->left, root->right);
}