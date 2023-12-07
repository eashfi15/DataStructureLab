#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};


void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);

// create a new node
Node* newNode(int data) {
  Node* temp = new Node;
  temp->data = data;
  temp->left = temp->right = nullptr;
  return temp;
}

// Preorder traversal
void preOrder(Node* root) {
  if (root == nullptr) {
    return;
  }
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

// Inorder traversal
void inOrder(Node* root) {
  if (root == nullptr) {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

// Postorder traversal
void postOrder(Node* root) {
  if (root == nullptr) {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main()
{
  Node* root = newNode(6);
  root->left = newNode(5);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  // Print preorder traversal
  cout << "Preorder traversal: ";
  preOrder(root);
  cout << endl;

  // Print inorder traversal
  cout << "Inorder traversal: ";
  inOrder(root);
  cout << endl;

  // Print postorder traversal
  cout << "Postorder traversal: ";
  postOrder(root);
  cout << endl;

  return 0;
}


