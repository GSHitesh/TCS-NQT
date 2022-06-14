// 12. Remove Duplicates in-place from unSorted Array

#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set <int> S;
    int arr[]={2,3,1,9,3,1,3,9};
    for(int i: arr)
        S.insert(i);
        
    for(int i: S)
        cout << i << " ";

    return 0;
}
