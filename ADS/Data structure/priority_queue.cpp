#include <iostream>


using namespace std;

int MAX_SIZE = 1000;
int array[1000];
int n;

void maxHeapify(int idx) {
	int left = 2*idx;
	int right = 2*idx + 1;
	
	if (left >= n)
		return;
	
	int maxIdx = idx;
	
	if (array[maxIdx] < array[left])
		maxIdx = left;
	
	if (right < n && array[maxIdx] < array[right])
		maxIdx = right;
		
	if (maxIdx != idx) {
		swap(array[maxIdx], array[idx]);
		maxHeapify(maxIdx);
	}
}

void buildMaxHeap() {
	for (int i = n/2; i >= 0; i--)
		maxHeapify(i);
}


void minHeapify(int idx) {
	int left = 2*idx;
	int right = 2*idx + 1;
	
	
	if (left >= n)
		return;
		
	int minIdx = idx;
	
	if (array[minIdx] > array[left])
		minIdx = left;
	
	
	if (right < n && array[minIdx] > array[right])
		minIdx = right;
		
	if (minIdx != idx) {
		swap(array[minIdx], array[idx]);
		minHeapify(minIdx);
	}
}


void buildMinHeap() {
	for (int i = n/2; i >= 0; i--)
		minHeapify(i);
}

void insert(int val) {
	array[n++] = val;
//	buildMinHeap();
	buildMaxHeap();
}


void remove() {
	swap(array[0], array[n - 1]);
	n--;
	buildMaxHeap();	
}


int findMin() {
	if (n > 0) return array[0];
	return -1;
}

void print() {
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	
//	buildMinHeap();
	print();
	buildMaxHeap();
	print();
	insert(50);
	print();
	remove();
	print();	
	return 0;
}
