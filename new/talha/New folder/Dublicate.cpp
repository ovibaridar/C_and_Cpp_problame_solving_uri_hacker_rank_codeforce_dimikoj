#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(int arr[], int n)
{

    int i;
    set<int> s;
    for (i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    set<int>::iterator it;
    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << ", ";
    cout << '\n';
}

int main()
{
    int sizee;
    cout<<"Enter a size of  array"<<endl;
    cin>>sizee;
    int arr[sizee];
    for(int i=0;i<sizee;i++){
        cin>>arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nBefore removing duplicates:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    removeDuplicates(arr, n);

    return 0;
}
