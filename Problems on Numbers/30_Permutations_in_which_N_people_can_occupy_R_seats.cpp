// 30 Permutations in which N people can occupy R seats

#include <cmath>
#include <iostream>


int Factorial(int n)
{
    if(n==1)
        return 1;
    return Factorial(n-1)*n;
}

using namespace std;

int main()
{
    int n,r;
    std::cin >> n >> r;
    
    cout << Factorial(n)/Factorial(n-r);
    return 0;
}
