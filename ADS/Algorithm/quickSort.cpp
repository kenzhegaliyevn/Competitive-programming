#include <iostream>

using namespace std;

int n;
int a[100000];

void quick(int left, int right){
	int i = left;
	int j = right;
	int midle = a[(i + j)/2];
	while (i <= j) {
		while (a[i] < midle)
			i++;
		while (midle < a[j])
			j--;
		if (i <= j){
			int k = a[i];
			a[i] = a[j];
			a[j] = k;
			i++;
			j--;
		}
	}
	if (j > left)
		quick(left, j);
	if (i < right)
		quick(i, right);
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
		quick(0, n - 1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}