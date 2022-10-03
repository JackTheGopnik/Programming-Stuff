#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// recursive - Insert Function....
Node *Insert(Node *root, int value)
{
    if (root == NULL)
    {
        return root = new Node(value);
    }
    else if (value < root->data)
    {
        root->left = Insert(root->left, value);
    }
    else
    {
        root->right = Insert(root->right, value);;
    }
    return root;
}

// Delete function...
Node *Delete(Node *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (value  < root->data)
    {
        root->left = Delete(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = Delete(root->right, value);
    }
    else
    {
        if (root-> left && root->right == NULL) // Case-1: No child
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) //Case-2: One Child (On Right)
        {
            Node *temp = root->right;
            delete root;
            root = temp;
        }
        else if (root->right == NULL) //Case-2: One Child (On Left)
        {
            Node *temp = root->left;
            delete root;
            root = temp;
        }
        else //Case-3: 2 Children
        {
            Node *temp = InorderSuccessor(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, root->data);
        }
    }
    return root;
}
// To find minimum value in the right subtree....case 3 deletion....
Node *InorderSuccessor(Node *root)
{
    Node *current = root;
    while(current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

//  Preorder = ROOT - LEFT - RIGHT
void Preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " " ;
        Preorder(root->left);
        Preorder(root->right);
    }
}

// Display/Traversal Functions....
// Inorder = LEFT - ROOT - RIGHT
void Inorder(Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->data << " " ;
        Inorder(root->right);
    }
}

//  Postorder = LEFT - RIGHT - ROOT
void Postorder(Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        Inorder(root->right);
        cout << root->data << " " ;
    }
}


// main....
int main()
{
    Node *root = NULL;
    root = Insert(root, 30);
    root = Insert(root, 35);
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 33);

    cout << "Traversals : \n";
    Preorder(root);
    Inorder(root);
	Postorder(root);
    return 0 ;
}