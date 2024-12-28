// Binary Tree - Sum of All Nodes
//Given the root of a binary tree, you need to find the sum of all the node values in the binary tree.
#include <stdio.h>
#include <stdlib.h>
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* newNode(int value) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int sumOfNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0; 
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return root->val + leftSum + rightSum;
}
int main() {
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int totalSum = sumOfNodes(root);
    printf("Sum of All Nodes in the Tree: %d\n", totalSum);
    return 0;
}
