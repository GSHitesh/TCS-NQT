// 32 Replace all the 0’s with 1 in a given integer

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
  long long int n;
  std::cin >> n;
  int N = n;
  int count = -1;
  
  while(n > 0)
  {
      if(n%10 ==0){
        count++;
        N += pow(10,count);
      }
      else
        count++;
        
    n = n/10;
  }
  
  std::cout << N << std::endl;
    
    
    
    

    return 0;
}