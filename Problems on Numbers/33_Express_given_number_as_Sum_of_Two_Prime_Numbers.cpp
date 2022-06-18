// 33 Express given number as Sum of Two Prime Numbers


#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
  long long int n;
  std::cin >> n;
  int N = n;
  
  if(n%2 == 1)
    {
      if(isPrime(n-2))
        std::cout << 2 << " " << n-2 << std::endl;
      else
        std::cout << "False" << std::endl;
    }

    else
    {
        if(isPrime(n-3))
        std::cout << 3 << " " << n-3 << std::endl;
        else
        std::cout << "False" << std::endl;
    }
    
    
    

    return 0;
}