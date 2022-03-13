#include <bits/stdc++.h>
using namespace std;

void run(string t, vector<double> &time)
{
    clock_t start, end;
    double time_used;
    for(int i=1 ; i<11 ; i++)
    {
        cout << "Running " << t << "...\t";
        start = clock();
        system((t + ".exe " + to_string(i)).c_str());
        end = clock();
        time_used = (double)(end - start)/CLOCKS_PER_SEC;
        cout << "Time used: " << time_used <<"\n";
        time.push_back(time_used);
    }
    cout <<"\n";
}
int main()
{
    system("Case.exe");
    vector<double> t1, t2, t3, t4;
    run("HeapSort", t1);
    run("MergeSort", t2);
    run("QuickSort", t3);
    run("SortSTL", t4);
    cout << "All done!!!\n\n\n";
    cout << "Algorithm\t";
    for (int i = 1; i<11 ; i++) cout<< "Case " + to_string(i) + "\t";
    cout << "\n";
    cout<<"Heap Sort\t";
    for (int i=0 ; i<10 ; i++) cout<<t1[i]<<"\t";
    cout<<"\n";

    cout<<"Merge Sort\t";
    for (int i=0 ; i<10 ; i++) cout<<t2[i]<<"\t";
    cout<<"\n";

    cout<<"Quick Sort\t";
    for (int i=0 ; i<10 ; i++) cout<<t3[i]<<"\t";
    cout<<"\n";

    cout<<"Sort STL\t";
    for (int i=0 ; i<10 ; i++) cout<<t4[i]<<"\t";
    cout<<"\n";
    system("pause");
}
