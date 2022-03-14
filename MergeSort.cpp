#include <bits/stdc++.h>
using namespace std;

int a[1000000], n;
void merge(int l, int m, int r) {
	int *tmp, i = l, j = m + 1;
	tmp = new int[r - l + 1]; 
	for (int k = 0; k <= r - l; k++)	{
		if (a[i] < a[j]) tmp[k] = a[i++]; 
		else tmp[k] = a[j++];
		if (i == m + 1) {
			while (j <= r) tmp[++k] = a[j++];
			break;
		}
		if (j == r + 1) {
			while (i <= m) tmp[++k] = a[i++];
			break;
		}
	}
	for (int k = 0; k <= r - l; k++)
		a[l + k] = tmp[k];
	delete tmp;
}

void mergesort(int left, int right) {
	if (right > left) {
		int mid = (left + right) / 2;
		mergesort(left, mid);
		mergesort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main(int argc, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
	string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
    cin >> n;
    for (int i=0 ; i<n ; i++) cin >> a[i];
    mergesort(0, n-1);
	return 0;
}
