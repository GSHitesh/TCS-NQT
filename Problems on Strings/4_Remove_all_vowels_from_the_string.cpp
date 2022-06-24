// 4 Remove all vowels from the string


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S ="Take u forward ",S2;
    // std::cin >> S;
    int A[3] = {0};
    for(int i=0;i<S.length();i++){
        
        if(toupper(S[i]) == 'A' || toupper(S[i]) == 'E' || toupper(S[i]) == 'I' || toupper(S[i]) == 'O' || toupper(S[i]) == 'U')
            continue;
            
        S2 += S[i];
        
    }
           
        
        std::cout << S2 << std::endl;
        

    return 0;
}
