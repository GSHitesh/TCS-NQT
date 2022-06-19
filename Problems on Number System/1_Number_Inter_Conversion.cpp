// Problems on Number System

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int Binary2Decimal(int n)
{
    int N = n, sum = 0; int base = 1;
    while(n>0)
    {
        int x = n%10;
        sum += base*x;
        base *= 2;
        n = n/10;
        
    }
    
    return sum;
}

int Octal2Decimal(int n)
{
    int N = n, sum = 0; int base = 1;
    while(n>0)
    {
        int x = n%10;
        sum += base*x;
        base *= 8;
        n = n/10;
        
    }
    
    return sum;
}

string Binary2Octal(string S)
{
    int n = S.length();
    
    if(n%3 == 1)
        S = "00" + S;
    else if(n%3 == 2)
        S = "0" + S;
        
    string octal ="";
    
    for(int i=0;i<n;i=i+3)
    {
        // ASCII value of 0->0, 1->1
        int temp = (S[i]-'0')*4 + (S[i+1]-'0')*2 + (S[i+2]-'0')*1;
        octal += (temp + '0');
    }
    
    return octal;
}

// Not working for some values i.e. (1-15)
string Binary2Hex(string S)
{
    int n = S.length();
    
    if(n%4 == 1)
        S = "000" + S;
    else if(n%4 == 2)
        S = "00" + S;
    else if(n%4 == 3)
        S = "0" + S;
        
    string hex ="";
    
    for(int i=0;i<n;i=i+4)
    {
        // ASCII value of 0->0, 1->1
        int temp = (S[i]-'0')*8 + (S[i+1]-'0')*4 + (S[i+2]-'0')*2 + (S[i+3]-'0')*1;
        // cout << temp;
        hex += (temp + '0');
        // cout << hex;
    }
    // cout << hex;
    return hex;
}

// Same procedure for Decimal2Octal and Decimal2Hex
void Decimal2Binary(int n)
{
    int binaryNum[100];
    int i = 0;
    while(n>0)
    {
        binaryNum[i] = n%2;
        i++;
        n=n/2;
    }
    
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

int main()
{
    ////********** Binary to Decimal *************
    // int N;
    // std::cin >> N;
    
    // cout << "BinaryDigit: "<< N << " Decimal Digit: " << Binary2Decimal(N) << endl;
    
    ////********** Binary to Octal *************
    // string n;
    // std::cin >> n;
    
    // cout << "BinaryDigit: "<< n << " Octal Digit: " << Binary2Octal(n) << endl;
    
    // // ********** Binary to Hex *************
    // string n;
    // std::cin >> n;
    
    // cout << "BinaryDigit: "<< n << " Hex Digit: " << Binary2Hex(n) << endl;
    
    // //********** Decimal to Binary *************
    // int n;
    // std::cin >> n;
    
    // cout << "Decimal Digit: "<< n << " Binary Digit: " ;
    // Decimal2Binary(n);
    
    //********** Octal to Decimal *************
    int n;
    std::cin >> n;
    
    cout << "Octal Digit: "<< n << " Decimal Digit: " << Octal2Decimal(n) ;
    

    return 0;
}