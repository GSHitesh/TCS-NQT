// 35 Program to Find Roots of a quadratic equation

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    std::cin >> a>>b>>c;
    
    float p = b*b - 4*a*c;
    cout << setprecision(3);
    if(p > 0)
    {
    p = sqrt(p);
    
    float root1 = (float)(-b-p)/(2*a);
    float root2 = (float)(-b+p)/(2*a);
    
    std::cout << root1 << " " << root2 << std::endl;
    
    }
    
    else if(p == 0)
    {
        float root1 = (float)(-b)/(2*a);
        float root2 = (float)(-b)/(2*a);
        
    std::cout << root1 << " " << root2 << std::endl;
    
    }
    
    else
    {
        p = sqrt(abs(p));
        
        float root1 = (float)(-b)/(2*a);
        float root2 = (float)(-b)/(2*a);
    
    std::cout << root1 << " + " << p << "i " << root2 << " - " << p << "i " << std::endl;
    
    }
    return 0;
}