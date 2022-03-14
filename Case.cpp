#include <bits/stdc++.h>
using namespace std;

void case1() {
    int n = 1000000;
    ofstream ofs;
    ofs.open("case1.inp");
    ofs << n << "\n";
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) 
        a[i] = rand()*rand()%1000000 + 1;
    sort(a.begin(), a.end());
    for (int i=0 ; i<n ; i++) 
        ofs << a[i] << " ";
    ofs.close();
}

void case2() {
    int n = 1000000;
    ofstream ofs;
    ofs.open("case2.inp");
    ofs << n <<"\n";
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) 
        a[i] = rand()*rand()%1000000 + 1;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(int i=0 ; i<n ; i++)
        ofs << a[i] << " ";
    ofs.close();
}

void casei(int stt)
{
    int n = 1000000;
    ofstream ofs;
    ofs.open("case" + to_string(stt) + ".inp");
    ofs << n <<"\n";
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) {
        a[i] = rand()*rand()%1000000 + 1;
        ofs << a[i] << " ";
    }
    ofs.close();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    srand(int(time(0)));
    case1();
    cout << "Case 1 is done!!!\n";
    case2();
    cout << "Case 2 is done!!!\n";
    for (int i=3 ; i<11 ; i++) {
        casei(i);
        cout<<"Case "<<i<<" is done!!!\n";
    }
    cout << "Have done the case creating process!!!\n\n\n";
    return 0;
}
