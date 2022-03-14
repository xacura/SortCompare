#include <bits/stdc++.h>
using namespace std;

int arr[1000000], n;

void quicksort(int l, int r) {
    int mid = (l + r) / 2;
    int i = l, j = r;
    while(i < j) {
        while(arr[i] < arr[mid]) i++;
        while(arr[j] > arr[mid]) j--;
        if (i <= j) swap(arr[i++], arr[j--]);
    }
    if (l < j) quicksort(l, j);
    if (r > i) quicksort(i, r);
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
    cin >> n;
    for (int i=0 ; i<n ; i++) cin >> arr[i];
    quicksort(0, n-1);
    return 0;
}
