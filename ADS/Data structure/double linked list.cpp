#include <iostream>

using namespace std;


struct node {
	int data;
	node *next;
	node *prev;
	node(int n) {
		data = n;
		next = nullptr;
		prev = nullptr;
	}
};

class doubleLinkedList {
public:
	node *head;
	node *tail;
	
	doubleLinkedList() {
		head = nullptr;
		tail = nullptr;
	}
	
	void addFront(int n) {
		node *tmp = new node(n);
		if (head == nullptr) {
			head = tmp;
			tail = tmp;
		} else {
			tmp->next = head;
			head->prev = tmp;
			head = tmp;			
		}
	}

	void addBack(int n) {
		node *tmp = new node(n);
		if (head == nullptr) {
			head = tmp;
			tail = tmp;
		} else {
			tmp->prev = tail;
			tail->next = tmp;
			tail = tmp;
		}
	}
	
	void delNode(node* toDeleteNode) {
		node *prev = toDeleteNode->prev;
		node *next = toDeleteNode->next;
		prev->next = next;
		next->prev = prev;
		delete toDeleteNode;
	}
	
	void display() {
		node *tmp = head;
		while (tmp != nullptr) {
			printf("%d ", tmp->data);
			tmp = tmp->next;
		}
		printf("\n");
	}
};

int main() {
	doubleLinkedList dll;
	dll.addFront(5);
	dll.addFront(6);
	dll.addFront(7);
	dll.delNode(dll.head->next);
	dll.display();
	return 0;
}
