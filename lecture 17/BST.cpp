// BST
#include <iostream>
using namespace std;

class node{

public:
	int data;
	node* left;
	node* right;

	node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};


node* Insertion_into_BST(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	if(data<root->data){
		root->left=Insertion_into_BST(root->left,data);
	}
	else{
		root->right=Insertion_into_BST(root->right,data);
	}
	return root;

}

node* CreateBST(){
	int data;cin>>data;
	node* root=NULL;
	while(data!=-1){
		root=Insertion_into_BST(root,data);
		cin>>data;
	}
	return root;
}

void inorder(node* root){
	if(root==NULL){
		return;
	}
//	ans++;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}

bool search(node* root,int key){
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	else if(root->data<key){
		search(root->right,key);
	}
	else{
		search(root->left,key);
	}
}
#include<climits>
bool is_BST(node* root,int mini=INT_MIN,int maxi=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=mini && root->data<=maxi && is_BST(root->left,mini,root->data) && is_BST(root->right,root->data,maxi)){
		return true;
	}
	else{
		return false;
	}

}
int height(node* root){
	if(root==NULL){
		return 0;
	}
	int left_height=height(root->left);
	int right_height=height(root->right);

	int my_height=max(left_height,right_height) + 1;
	return my_height;
}
#include<cmath>
bool is_balaced(node* root){
	if(root==NULL){
		return true;
	}
	if(abs(height(root->left)-height(root->right))<=1 && is_balaced(root->left) && is_balaced(root->right)){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	node* root=CreateBST();
	//inorder(root);
	cout<<boolalpha<<is_balaced(root);
	return 0;
}