// Convert digits/numbers to words

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string SingleDigit [] = {"zero", "one","two", "three","four","five","six","seven","eight","nine"};
    string TwosDigit [] = {"ten","eleven" ,"twelve","thirteen","fourteen","fiveteen","sixteen", "seventeen ","nineteen"};
    string TensMultiple [] = { "", "","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    string TensPower [] = {"hundred", "thousand"};
    
    string num;
    std::cin >> num;
    
    int len = num.length();
    
    if(len == 1)    // 0 - 9
    {
        cout  << SingleDigit[num[0] - '0'] << " ";
        exit(0);
    }

    for (int i = 0; i < num.length(); i++)
    {
        if(len > 2) // 100 - 9999
        {
            if(num[i] - '0'  != 0)
            {
                cout << SingleDigit[num[i] - '0'] << " ";
                cout << TensPower[len - 3] << " ";
            }
            len--;
        }

        else{

            if(num[i] - '0' == 1)   // 10 - 19
            {
                cout << TwosDigit[num[i+1] - '0'] << " ";
                break;
            }

            else if(num[i] - '0' != 0)  // 20,30,40,50,60,70,80,90
            {
                if(len == 2)
                    cout << TensMultiple[num[i] - '0'] << " ";
                
                if(num[num.length()-1] -'0' != 0)
                {
                cout << SingleDigit[num[num.length()-1] - '0'] << " "; 
                break;
                }
            }

            // else if(num[num.length()-1] -'0' != 0)
            // {
            //     cout << SingleDigit[num[num.length()-1] - '0'] << " "; 
            //     break;

            // }

        }
    }
    
    

    

    return 0;
}