#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

class LinkedList {
	private:
		node *head;
	public:
		LinkedList() {
			head = NULL;
		}
		void add_node(int n) {
			node *tmp = new node;
			tmp->data = n;
			tmp->next = head;
			head = tmp;
		}
		void display() {
			node *tmp;
			tmp = head;
			if (tmp == NULL) cout << "NULL\n";
			while (tmp != NULL) {
				cout << tmp->data << endl;
				tmp = tmp->next;
			}
		}
	
};

int main() {
	LinkedList list;
	list.add_node(1);
	list.add_node(2);
	list.display();
	return 0;
}
