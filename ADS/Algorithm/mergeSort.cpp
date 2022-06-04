#include <iostream>

using namespace std;

int a[100000], b[100000];

void merge(int l, int mid, int r) {
	int it1 = l;
	int it2 = mid + 1;
	int k = 0;
	while (it1 <= mid || it2 <= r){
		if (it1 <= mid && (it2 > r || a[it1] <= a[it2])){
			b[k++] = a[it1];
			it1++;
		} else {
			b[k++] = a[it2];
			it2++;
		}
	}
	for (int i = l; i <= r; i++)
		a[i] = b[i - l];
}

void mergeSort(int l, int r){
	if (l == r) return;
	int mid = (l + r)/2 ;
	mergeSort(l, mid);
	mergeSort(mid + 1, r);
	merge(l, mid, r);
}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
    mergeSort(0, n - 1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}