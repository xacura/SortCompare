#include <bits/stdc++.h>
using namespace std;

int a[1000000];
void merge(int left, int mid, int right)
{
	int *temp, i = left, j = mid + 1;
	temp = new int[right - left + 1]; 
	for (int k = 0; k <= right - left; k++)
	{
		if (a[i] < a[j]) 
		{
			temp[k] = a[i]; 
			i++; 
		}
		else 
		{
			temp[k] = a[j];
			j++;
		}
		if (i == mid + 1) 
		{
			while (j <= right)
			{
				k++;
				temp[k] = a[j];
				j++;
			}
			break;
		}
		if (j == right + 1) 
		{
			while (i <= mid)
			{
				k++;
				temp[k] = a[i];
				i++;
			}
			break;
		}
	}

	for (int k = 0; k <= right - left; k++)
		a[left + k] = temp[k];
	delete temp;
}

void mergesort(int left, int right)
{
	if (right > left)
	{
		int mid = (left + right) / 2;
		mergesort(left, mid);
		mergesort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main(int argc, char * argv[]) {
    string t = argv[1];
    freopen(("case" + t + ".inp").c_str(), "r", stdin);
    int n; cin >> n;
    for (int i=0 ; i<n ; i++) cin >> a[i];
    mergesort(0, n-1);
    return 0;
}