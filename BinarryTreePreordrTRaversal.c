//Binary Tree Preorder Traversal

//Given the root of a binary tree, return the preorder traversal of its nodes' values.
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
void preorderTraversalHelper(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->val);
    preorderTraversalHelper(root->left);
    preorderTraversalHelper(root->right);
}
void preorderTraversal(struct TreeNode* root) {
    printf("Preorder Traversal: ");
    preorderTraversalHelper(root);
    printf("\n");
}
int main() {
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    preorderTraversal(root);

    return 0;
}

