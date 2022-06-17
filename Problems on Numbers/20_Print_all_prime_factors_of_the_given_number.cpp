// 20 Print all prime factors of the given number

#include <iostream>

using namespace std;

void primeFactor(int n)
{
    for(int i=2;n>1;i++){  // increments till n%i == 0
        if(n%i == 0){
            while(n%i == 0){ // it checks the prime factors 
            cout << i << " ";
            n = n/i;
            }
        }
    }
}
int main()
{
    int n;
    std::cin >> n;
    
    primeFactor(n);

    return 0;
}
