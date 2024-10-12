#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}t;

t *createNode(int data) {
    t *newNode = (t *)malloc(sizeof(t));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

t *searchNode(t *root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }
    if (data < root->data) {
        return searchNode(root->left, data);
    }
    if (data > root->data) {
        return searchNode(root->right, data);
    }

    return NULL;

}

t *insertnode(t *root, int data) {

    if (root == NULL) {
        root = createNode(data);
    }

    if (data < root->data) {
        root->left = insertnode(root->left, data);
    }

    if (data > root->data) {
        root->right = insertnode(root->right, data);
    }

    return root;
}

void inorderTraversal(t *root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(t *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(t *root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

void display(t *root) {
    if (root == NULL) {
        return;
    }
    printf("\nPreorder: ");
    preorderTraversal(root);
    printf("\nInorder: ");
    inorderTraversal(root);
    printf("\nPostorder: ");
    postorderTraversal(root);
    printf("\n");
}

int main() {
    t *root = NULL;
    root = insertnode(root, 50);
    root = insertnode(root, 30);
    root = insertnode(root, 20);
    root = insertnode(root, 40);
    root = insertnode(root, 70);
    root = insertnode(root, 60);
    root = insertnode(root, 80);
    searchNode(20);
    display(root);


    return 0;
}

