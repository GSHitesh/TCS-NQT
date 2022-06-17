// 3 Check if a number is prime or not

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    for(int i=1;i<=n/2;i++){
        if(n%i == 0)
            count++;
    }
    
    if(count > 1)
        cout <<"Not Prime";
    else
        cout << "Prime";
    
    
    return 0;
}
