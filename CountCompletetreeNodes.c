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
int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftCount = countNodes(root->left);  
    int rightCount = countNodes(root->right);  

    return 1 + leftCount + rightCount;  
}
int main() {
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    int totalNodes = countNodes(root);
    printf("Total Nodes in the Tree: %d\n", totalNodes);

    return 0;
}
