#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

void quicksort(int left, int right)
{
    int mid = (left + right) / 2;
    int i = left, j = right;
    while(i < j) {
        while(arr[i] < arr[mid]) i++;
        while(arr[j] > arr[mid]) j--;
        if (i <= j) swap(arr[i++], arr[j--]);
    }
    if (left < j) quicksort(left, j);
    if (right > i) quicksort(i, right);
}

int main(int argc, char *argv[])
{
    int n;
    string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
    cin >> n;
    for (int i=0 ; i<n ; i++) cin >> arr[i];
    quicksort(0, n-1);
    return 0;
}
