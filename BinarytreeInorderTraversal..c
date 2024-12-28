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
void inorderTraversalHelper(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
inorderTraversalHelper(root->left);
printf("%d ", root->val);
inorderTraversalHelper(root->right);
}
void inorderTraversal(struct TreeNode* root) {
    printf("Inorder Traversal: ");
    inorderTraversalHelper(root);
    printf("\n");
}
int main() {
    struct TreeNode* root = newNode(1);
    root->right = newNode(2);
    root->right->left = newNode(3);
    inorderTraversal(root);
    return 0;
}
