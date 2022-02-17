#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

class List {	
public:
	node *head;
	node *tail;
		
	List() {
		head = nullptr;
		tail = nullptr;		
	} 
	
	void add(int n) {
		node *tmp = new node;
		tmp->data = n;
		tmp->next = nullptr;
		if (head == nullptr) {
			head = tmp;
			tail = tmp;		
		} else {
			tail->next = tmp;
			tail = tail->next;
		}
	}
	
	void display() {
		node *tmp;
		tmp = head;
		while (tmp != nullptr) {
			printf("%d ", tmp->data);
			tmp = tmp->next;
		}
		printf("\n");
	}
	
	 void front(int n) {
	 	node *tmp = new node;
	 	tmp->data = n;
	 	tmp->next = head;
	 	head = tmp;
	 } 
	 
	 void after(node *a, int n) {
	 	node *tmp = new node;
	 	tmp->data = n;
	 	tmp->next = a->next;
	 	a->next = tmp;
	 }
	 
	 void del(node *beforeDel) {
	 	node *tmp;
	 	tmp = beforeDel->next;
	 	beforeDel->next = tmp->next;
	 	delete tmp;
	 }
};

int main() {
	List l;
	l.add(5);
	l.add(7);
	l.front(3);
	l.display();
	l.after(l.head, 8);
	l.display();
	l.del(l.head->next);
	l.display();
	return 0;
}
