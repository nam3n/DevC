#include<iostream>
#include<string>
using namespace std;

struct SNode {
	string data;
	SNode *next;
	
	SNode(string s, SNode* n)  {
      data = s;
      next = n;
   }
   string getData() { return data; }
   void print() {
		cout << data;
   }
};

class Stack {
	protected:
		SNode *head;
		int size;
	public:
		Stack() {
			size = 0;
			head = NULL;
		}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		return !(size);
	}
	void push(string s) {
		SNode* newNode = new SNode(s, head);
        head = newNode;
        size++;
	}
	string top() {
		if (size==0) return NULL;
		return head->getData();	
	}
	string pop() {
		if (size==0) return NULL;
        string s = head->getData();
        SNode *t = head;
        head = head->next;
        delete t;
        size--;
        return s;
	}
	void print() {
		SNode *iter = head;
        while (iter!=NULL) {
            iter->print();
            cout << " ";
            iter = iter->next;   
        }
        cout << endl;
	}
};

int main() {
	Stack *stack = new Stack();
	cout << stack->isEmpty() << endl;
	stack->push("nam");
	cout << stack->getSize() << endl;
	stack->push("duong");
	cout << stack->top() << endl;
	stack->print();
	cout << stack->pop() << endl;
	stack->print();
}
