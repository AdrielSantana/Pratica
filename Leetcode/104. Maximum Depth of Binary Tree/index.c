struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int max(n1, n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int maxDepth(struct TreeNode *root)
{
    if (!root)
        return 0;
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return max(maxLeft, maxRight) + 1;
}