// 4 Prime Numbers in a given range

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    
    for(int j = n1;j<=n2;j++)
    {
        int count = 0;
        int k = j;
        for(int i=1;i<=k/2;i++)
        {
            if(j%i == 0)
                count++;
        }
    
    if(count == 1)
        cout << j << " ";
    
    }
    
    
    return 0;
}
