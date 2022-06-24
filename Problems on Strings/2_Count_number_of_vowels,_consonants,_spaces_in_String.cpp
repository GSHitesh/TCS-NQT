// 2 Count number of vowels, consonants, spaces in String


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S ="Take u forward is Awesome";
    // std::cin >> S;
    int A[3] = {0};
    for(int i=0;i<S.length();i++){
        S[i]  = toupper(S[i]);
        if(S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
            A[0]++;
        else if(S[i] == ' ')
            A[1]++;
        else
            A[2]++;
        }
        
        std::cout << "Vowels: " << A[0]  << std::endl;
        std::cout << "Consonants: " << A[2]  << std::endl;
        std::cout << "White Spaces: " << A[1]  << std::endl;

    return 0;
}
