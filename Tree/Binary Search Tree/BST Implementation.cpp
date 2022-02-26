// Binary Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create a node
struct node *createNode(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


// Recursive function to Insert a node into BT
struct node *insertNode(struct node *node, int value)
{
    // Return a new node if the tree is empty
    if (node == NULL) return createNode(value);

    // Traverse to the right place and insert the node
    if (value < node->data)
        node->left = insertNode(node->left, value);
    else
        node->right = insertNode(node->right, value);

    return node;
}

// In-order Traversal
void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {

        inorderTraversal(root->left);
        printf("%d-> ", root->data);
        inorderTraversal(root->right);
    }
}

/*
// Pre-order traversal
void preorderTraversal(struct node *root)
{
    if (root == NULL) return;

    printf("%d-> ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);

}
*/


// Driver code
int main()
{
    struct node *root = NULL;
    root  = insertNode(root, 8);
    insertNode(root, 3);
    insertNode(root, 1);

    insertNode(root, 7);
    insertNode(root, 6);
    insertNode(root, 10);
    insertNode(root, 14);
    insertNode(root, 4);

    printf("In-order Traversal: ");
    inorderTraversal(root);
    printf("NULL\n");

    printf("\n\n");

    printf("Pre-order Traversal: ");
//    preorderTraversal(root);
    printf("NULL \n");

    return 0;
}

// Complexity : O(log(n) -> Best, Average case..... O(n) -> Worst case.

