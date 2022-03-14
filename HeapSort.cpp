#include <bits/stdc++.h>
using namespace std;

int arr[1000000], n;
void heapify(int n, int i) {
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(n, largest);
	}
}
void heapSort() {
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(n, i);
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(i, 0);
	}
}

int main(int argc, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
	string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
	cin >> n;
    for (int i=0 ; i<n ; i++) cin >> arr[i];
    heapSort();
	return 0;
}
