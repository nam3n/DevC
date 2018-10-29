#include <iostream>

using namespace std;

struct Node{
	int info;
	int leafNow, leafPossible;
	Node *left;
	Node *right;
};

class Btree{
	public:
		Btree();
		~Btree();
		
		void destroyTree();
		void insert(int key);
		void inorderPrint();
		void postorderPrint();
	private:
		Node *root;
		
		void destroyTree(Node *node);
		void insert(int key, Node *node);
		void inorderPrint(Node *node);
		void postorderPrint(Node *node);
		bool isFull(Node *node);
		void printSign(int sign);
};

Btree::Btree(){
	root = NULL;
}

Btree::~Btree(){
	destroyTree();
}

void Btree::destroyTree(){
	destroyTree(root);
}

void Btree::destroyTree(Node *node){
	if(node != NULL){
		destroyTree(node->left);
		destroyTree(node->right);
		delete node;
	}
}

void Btree::insert(int key){
	if(root == NULL){
		root = new Node;
		root->info = key;
		root->left = NULL;
		root->right = NULL;
	} else insert(key, root);
}

void Btree::insert(int key, Node *node){
	if(node->left == NULL){
		cout << key << " is left " << node->info << endl;
		node->left = new Node;
		node->left->info = key;
		node->left->leafNow = 0;
		node->left->leafPossible = 2;
		node->left->left = NULL;
		node->left->right = NULL;
		
		node->leafNow += 1;
	} else if(node->right == NULL){
		cout << key << " is right " << node->info << endl;
		node->right = new Node;
		node->right->info = key;
		node->right->leafNow = 0;
		node->right->leafPossible = 2;
		node->right->left = NULL;
		node->right->right = NULL;
		
		node->leafNow += 1;
	} else if(!isFull(node->left)){
		insert(key, node->left);
		node->leafNow+=1;
	} else if(!isFull(node->right)){
		insert(key, node->right);
		node->leafNow +=1;
	} else {
	node->leafPossible *=2;	
	node->leafNow = 1;
	insert(key, node->left);
	}
}

bool Btree::isFull(Node *node){
	return (node->leafNow = node->leafPossible);
}

void Btree::inorderPrint(){
	cout << "Inorder: ";
	inorderPrint(root);
	cout << endl;
}

void Btree::inorderPrint(Node *node){
	if(node != NULL){
		inorderPrint(node->left);
		if(node->left == NULL){
			cout << node->info << " ";
		} else printSign(node->info);
		inorderPrint(node->right);
	}
}

void Btree::postorderPrint(){
	cout << "Postorder: ";
	postorderPrint(root);
	cout << endl;
}

void Btree::postorderPrint(Node *node){
	if(node != NULL){
		postorderPrint(node->left);
		postorderPrint(node->right);
		if(node->right == NULL){
			cout << node->info << " ";
		} else printSign(node->info);
	}
}

void Btree::printSign(int sign){
	switch (sign) {
		case 1:
			cout << "+ ";
			break;
		case 2:
			cout << "- ";
			break;
		case 3:
			cout << "* ";
			break;
		case 4:
			cout << "/ ";
			break;
	}
}

int main(){
	Btree *tree = new Btree();
	
	tree->insert(3);
	tree->insert(1);
	tree->insert(2);
	tree->insert(4);
	tree->insert(3);
	tree->insert(7);
	tree->insert(4);
	tree->insert(6);
	tree->insert(2);
	// expressions is (6 / 2 + 3)*(7 - 4)
	
	tree->inorderPrint();
	tree->postorderPrint();
	
	delete tree;
	
}
