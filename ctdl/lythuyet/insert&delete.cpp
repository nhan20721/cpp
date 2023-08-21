#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left;				//Khai bao con tro voi Node
	struct Node *right;
};

//Ham sap xep thu tu xuat hien cua BST
void Inorder(Node *root) {
	if(root == NULL){
		return;
	}
	Inorder(root->left);								//Truy cap cay con ben trai
	cout << root->data <<"\t";        					//Truy cap root
	Inorder(root->right);  								//Truy cap cay con ben phai
    
}

//Ham chen node vao cay
Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();								//Tao node moi neu cay trong
		root->data = data;								
		root->left = root->right = NULL;
	}else if(data <= root->data){
		root->left = Insert(root->left,data);			//Goi de quy de chen vao cay con ben trai
	}else{
		root->right = Insert(root->right,data);			//Goi de quy de chen vao cay con ben phai
	}
	return root;
}

//Ham tim node nho nhat
Node* FindMin(Node* root)
{
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}

//Ham xoa
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL){
		return root; 
	}else if(data < root->data){						//Neu du lieu dang tim nho hon du lieu goc thi du lieu do o cay con ben trai. 
		root->left = Delete(root->left,data);			//Goi de quy ham xoa qua cay con ben trai va du lieu can xoa. Dat tra ve la cay con trai cua nut hien tai
	}else if(data > root->data){
		root->right = Delete(root->right,data);			//Tuong tu voi ben phai
	}else{
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;								//Su dung toan tu delete
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;					//Luu dia chi node muon xoa
			root = root->right;							//Cay con ben phai tro thanh goc cua no
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right);	//Tim node co gia tri nho nhat o ben phai va tra ve con tro temp
			root->data = temp->data;					//Dat du lieu trong node muon xoa
			root->right = Delete(root->right,temp->data);//Xoa gia tri nho nhat o cay con ben phai cua node
		}
	}
	return root;
}

int main() {
	Node* root = NULL;				//Khai bao con tro luu dia chi node root va dat gia tri NULL (tao cay trong)
	root = Insert(root,5);			
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	root = Delete(root,15);

	cout<<"Inorder:  ";
	Inorder(root);
	cout<<"\n";
}
