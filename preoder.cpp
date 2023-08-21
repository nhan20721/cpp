#include <iostream>
using namespace std;

struct Node {
  int data; 
  Node* left; 
  Node* right; 

  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

void preorder(Node* root) {
  if (root == NULL) return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void test() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout << "Preorder: ";
  preorder(root);
  cout << endl;
}

int main() {
  test();
  return 0;
}
