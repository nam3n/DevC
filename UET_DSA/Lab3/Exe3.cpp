#include<iostream>
#include<string>
using namespace std;

struct SNode {
	string data;
	SNode *next;
	SNode *prev;
	
	SNode(string s, SNode* n)  {
      data = s;
      next = NULL;
      prev = n;
      
   }
   string getData() { return data; }
   void print() {
		cout << data;
   }
};

class Queue {
	protected:
		SNode *tail;
		SNode *head;
		int size;
	public:
		Stack() {
			size = 0;
			head = NULL;
			tail = NULL;
		}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		return !(size);
	}
	void push(string s) {
		SNode* newNode = new SNode(s, tail);
		if (tail!=NULL) tail->next = newNode;
        tail = newNode;
        if (!size) head = tail;
        size++;
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
	Queue *queue = new Queue();
	cout << queue->isEmpty() << endl;
	queue->push("nam");
	cout << queue->getSize() << endl;
	queue->push("duong");
	queue->print();
	cout << queue->pop() << endl;
	queue->print();

}
