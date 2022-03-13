#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int main(int argc, char * argv[]){
    int n;
    string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
    cin >> n;
    for (int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr, arr+n);
    return 0;
}
