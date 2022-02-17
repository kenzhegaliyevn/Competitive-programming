#include <iostream>

#define SIZE 100

using namespace std;

struct queue {
	int a[SIZE];
	int head = 0;
	int tail = 0;
	
	void push(int x) {
		a[tail++] = x;
	}
	
	void pop() {
		if (head != tail) {
			head++;
		} else {
			exit(0);		
		}
	}
	
	bool isEmpty() {
		return head == tail;
	}
	
	int front() {
		if (head != tail) {
			head++;
			return a[head - 1];
		} else {
			exit(0);		
		}	
	}
	
	int size() {
		return tail - head;
	}
};

int main() {
	queue q;
	q.push(5);
	q.push(6);
	printf("%d\n", q.size());
	printf("%d\n", q.front());
	q.pop();
	printf("%d\n", q.front());	
	return 0;
}
