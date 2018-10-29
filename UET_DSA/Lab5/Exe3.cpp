#include <iostream>
using namespace std;

template <class Type>
struct node {
	Type data;
	node *next;
};

template <class Type>
class LinkedList {
	private:
		node<Type> *head;
	public:
		LinkedList() {
			head = NULL;
		}
		
		void add_node(Type n) {
			node<Type> *tmp = new node<Type>;
			tmp->data = n;
			tmp->next = head;
			head = tmp;
		}
		void display() {
			node<Type> *tmp;
			tmp = head;
			if (tmp == NULL) cout << "NULL\n";
			while (tmp != NULL) {
				cout << tmp->data << endl;
				tmp = tmp->next;
			}
		}
	
};

int main() {
	// string test
	cout << "String linked list test:\n";
	LinkedList<string> *stringList = new LinkedList<string>;
	stringList->add_node("hai");
	stringList->add_node("mot");
	stringList->add_node("ba");
	stringList->add_node("hai");
	stringList->display();
	// int test
	cout << "Int linked list test:\n";
	LinkedList<int> *intList = new LinkedList<int>;
	intList->add_node(2);
	intList->add_node(1);
	intList->add_node(3);
	intList->add_node(2);
	intList->display();
	// double test
	cout << "Double linked list test:\n";
	LinkedList<double> *doubleList = new LinkedList<double>;
	doubleList->add_node(2.2);
	doubleList->add_node(1.11);
	doubleList->add_node(3.5);
	doubleList->add_node(2.2);
	doubleList->display();
	return 0;
}
