/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findsum(TreeNode* A, int sum)
{
    if(A==NULL) return 0;
    sum=((sum%1003)*10+(A->val)%1003)%1003;
    if(A->left==NULL && A->right==NULL)
    {
        return sum;
    }
    return (findsum(A->left,sum)%1003+findsum(A->right,sum)%1003)%1003;
}
int Solution::sumNumbers(TreeNode* A) {
    int sum=0;
    return findsum(A,sum);
}
