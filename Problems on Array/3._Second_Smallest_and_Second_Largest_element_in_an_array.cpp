// 3. Second Smallest and Second Largest element in an array

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int A[] = {10,30,50,70,20,90};
    int n = 6;
    int min = INT_MAX;
    int min2 = INT_MAX;
    for(int i: A){
        if(min > i){        // Finding the minimum element
            min = i;
        }
    }
    
    for(int i: A){
        if(min < i && min2 > i) // 2nd Condition same as finding minimum element
            min2 = i;
    }
    
    cout << "2nd Smallest Element: " << min2 << endl;

    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i: A){
        if(max < i){
            max = i;
        }
    }
    
    for(int i: A){
        if(max > i && max2 < i) // 2nd Condition same as finding minimum element
            max2 = i;
    }
    
    cout << "2nd Largest Element: " << max2 << endl;
    return 0;
}
