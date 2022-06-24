// 10 Capitalize first and last character of each word


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S ="Take u forward ",S2,S3;
    
    for(int i=0;i<S.length();i++){
        S2 += S[i];
        if(S[i] == ' '){
            S2[0] = toupper(S2[0]);
            S2[S2.length()-2] = toupper(S2[S2.length()-2]);
            S3 += S2;
            S2 = "";
        }
    }
    
    std::cout << S3 << std::endl;
        

    return 0;
}
