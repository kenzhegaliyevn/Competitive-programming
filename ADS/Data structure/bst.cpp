#include <iostream>

using namespace std;


class BST {	
public:
	struct node {
		int data;
		node* left;
		node* right;
	};

	node* root;
	
	node* insert(int x, node* t) {
		if (t == NULL) {
			t = new node;
			t->data = x;
			t->left = t->right = NULL;
		} else if (x < t->data)
			t->left = insert(x, t->left);
		else if (x > t->data)
			t->right = insert(x, t->right);
		return t;
	}
			
	void inOrder(node* t) {
		if (t == NULL)
			return;
		inOrder(t->left);
		printf ("%d ", t->data);
		inOrder(t->right);
	}
	
	void preOrder(node* t) {
		if (t == NULL)
			return;
		printf("%d ", t->data);
		preOrder(t->left);
		preOrder(t->right);
	}
	
	void postOrder(node* t) {
		if (t == NULL)
			return;
		postOrder(t->left);
		postOrder(t->right);
		printf ("%d ", t->data);
	}
	
	
	node* find(node* t, int x) {
		if (t == NULL)
			return NULL;
		else if (x < t->data)
			return find(t->left, x);
		else if (x > t->data)
			return find(t->right, x);
		else
			return t;
	}
	
	
	node* findMin(node* t) {
		if (t == NULL)
			return NULL;
		else if (t->left == NULL)
			return t;
		else 
			return findMin(t->left);
	}

	node* findMax(node* t) {
		if (t == NULL)
			return NULL;
		else if (t->right == NULL)
			return t;
		else 
			return findMax(t->right);
	}
	
	node* remove(int x, node* t) {
		node*  tmp;
		
		if (t == NULL)
			return NULL;
		else if (x < t->data)
			t->left = remove(x, t->left);
		else if (x > t->data)
			t->right = remove(x, t->right);
		else if (t->left && t->right) {
			tmp = findMin(t ->right);
			t->data = tmp->data;
			t->right = remove(t->data, t->right);
		} else {
			tmp = t;
			if (t->left == NULL)
				t = t->right;
			else if (t->right == NULL)
				t = t->left;
			delete tmp;
		}
		return t;
	}


	// constructor
	BST() {
		root = NULL;
	}
		
	void insert(int x) {
		root = insert(x, root);
	}
	
	
	void remove(int x) {
		root = remove(x, root);
	}
	
	void display() {
		inOrder(root);
		printf ("\n");
		preOrder(root);
		printf ("\n");
		postOrder(root);
		
	}
	
	void search(int x) {
		node* ans = find(root, x);
		if (ans == NULL)
			printf ("Not found");
		else 
			printf ("%d\n", ans->data);
	}
	
	void searchMin() {
		node* mini = findMin(root);
		printf ("%d\n", mini->data);
	}
	
	void searchMax() {
		node* maxi = findMax(root);
		printf ("%d\n", maxi->data);
	}
};



int main() {
	BST myTree;
	int treeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
	
	for (int i = 0; i < 16; i++)
		myTree.insert(treeKeys[i]);
		
	myTree.display();
	printf ("\n");
//	myTree.search(23234);
	
	myTree.remove(15);
	myTree.searchMin();
	myTree.searchMax();
	return 0;
}
