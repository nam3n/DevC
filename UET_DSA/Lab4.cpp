#include <iostream>
#include <cmath>

using namespace std;

struct Node{
	int info;
	int height;
	int leafCounter;
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
		void printSign(int sign);
		bool isFull(Node *node);
		void update(Node *node);
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
		root->height = 0;
		root->leafCounter = 1;
		root->left = NULL;
		root->right = NULL;
	} else {
		insert(key, root);
		update(root);
	}
}

void Btree::update(Node *node){
	Node *l = node->left;
	Node *r = node->right;
	if(l != NULL){
		node->height = l->height + 1;
		node->leafCounter = l->leafCounter;
	}
	if(r != NULL){
		if(node->height<r->height) node->height = r->height;
		node->leafCounter += r->leafCounter;
	}
}

void Btree::insert(int key, Node *node){
	if(node->left == NULL){
		node->left = new Node;
		node->left->info = key;
		node->left->height = 0;
		node->left->leafCounter = 1;
		node->left->left = NULL;
		node->left->right = NULL;
	} else if(node->right == NULL){
		node->right = new Node;
		node->right->info = key;
		node->right->height = 0;
		node->right->leafCounter = 1;
		node->right->left = NULL;
		node->right->right = NULL;
	} else if(!isFull(node->left)){
		insert(key, node->left);
		update(node->left);
	} else if(!isFull(node->right)){
		insert(key, node->right);
		update(node->right);
	} else {
		insert(key, node->left);
		update(node->left);
	}
}

bool Btree::isFull(Node *node){
	if(node->left == NULL) return 0;
	return (node->leafCounter == (int) pow(2, node->height));
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
