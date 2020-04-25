// tree
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

node* CreateTree(){
	int data;
	cin>>data;

	if(data==-1){
		//base case stop creating tree
		return NULL;
	}
	else{
		node* root=new node(data);
		//cout<<"Enter the left child data of "<<root->data<<" ";
		root->left=CreateTree();
		//cout<<"Enter the right child data of "<<root->data<<" ";
		root->right=CreateTree();
		return root;
	}
}

void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

//int ans=0;
void inorder(node* root){
	if(root==NULL){
		return;
	}
//	ans++;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int cntnode(node* root){
	if(root==NULL){
		return 0;
	}
	int leftnodes=cntnode(root->left);
	int rightnodes=cntnode(root->right);

	int myans=leftnodes + rightnodes + 1;
	return myans;
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

int Daimeter(node* root){
	if(root==NULL){
		return 0;
	}
	int op1=height(root->left) + height(root->right) + 1;//passing through root node
	int op2=Daimeter(root->left); //daimeter exist left
	int op3=Daimeter(root->right); //daimter exist right

	return max(op1,max(op2,op3));
}

pair<int,int> HeiDia(node* root){
	pair<int,int>p;
	if(root==NULL){
		p.first=0;
		p.second=0;
		return p;
	}
	pair<int,int> left=HeiDia(root->left);
	pair<int,int> right=HeiDia(root->right);

	p.first=max(left.first,right.first) + 1;
	p.second=max(left.first+right.first+1,max(left.second,right.second));
	return p;
}
#include<queue>
node* levelorderInput(){
	int data;
	cin>>data;
	node* root=new node(data);
	queue<node* >q;
	q.push(root);

	while(!q.empty()){
		node* root=q.front();
		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1){
			root->left=new node(leftdata);
			q.push(root->left);
		}
		int rightdata;
		cin>>rightdata;
		if(rightdata!=-1){
			root->right=new node(rightdata);
			q.push(root->right);
		}
		q.pop();
	}
	return root;


}

void levelorderPrint(node* root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* root=q.front();
		q.pop();
		cout<<root->data<<" ";
		if(root->left!=NULL){
			q.push(root->left);
		}
		if(root->right!=NULL){
			q.push(root->right);
		}
		if(q.front()==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
	}


}

int main()
{
	node* root=levelorderInput();
	// // preorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;
	// inorder(root);
	// cout<<endl;
	// int ans=cntnode(root);
	// cout<<ans<<endl;
	// int ans1=height(root);
	// cout<<ans1<<endl;
	// int ans=Daimeter(root);
	// cout<<ans<<endl;
	// pair<int,int> p=HeiDia(root);
	// cout<<p.first<<" "<<p.second<<endl;
	levelorderPrint(root);
	return 0;
}