/*

A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.

Example 1:

Input :

5    -> Value of T
[7,0,5,1,3]  -> E[], Element of E[0] to E[N-1], where input each element is separated by new line 
[1,2,1,3,4]   -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :

8     -> Maximum number of guests on cruise at an instance.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int E[] = {7,0,5,1,3};
    int L[] = {1,2,1,3,4};
    int m = INT_MIN,guest = 0;
    
    int n = sizeof(E)/sizeof(E[0]);
    
    for(int i=0;i<n;i++)
    {
        guest += E[i] - L[i];
        if(guest > m)
        {
            m = guest;
        }
    }
    
    cout << m;
}