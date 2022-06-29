/*
At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int> ballon;
    int N;
    cin >> N;
    char B[50];
    for(int i=0;i<N;i++)
    {
        cin >> B[i];
        
    }
    
    for(int i=N-1;i>=0;i--)
    {
        int count = 1;
        
        if(B[i]!= '0'){
            for(int j=N;j>i+1;j--){
                if(B[i] == toupper(B[j]) || B[i] == tolower(B[j])){
                    count++;
                    B[j] = '0';
                }
            }
            ballon.insert({B[i],count});
        }
    }
    
    for (auto itr = ballon.begin(); itr != ballon.end(); ++itr) {
        if(itr->second % 2 == 1)
            cout << itr->first;
            
            break;
    }
    
    return 0;
    
}