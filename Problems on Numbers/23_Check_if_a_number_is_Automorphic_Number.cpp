// 23 Check if a number is Automorphic Number

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    
    int sq = n*n;
    
    while(n>0){
        if(n%10 != sq %10)
        {
            std::cout << "Not Automorphic Number" << std::endl;
            exit(0);
        }
        n = n/10;
        sq = sq/10;
    }
    
    std::cout << "Automorphic Number" << std::endl;

        

    return 0;
}
