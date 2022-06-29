/*
Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
2nd data, Total number of wheels = W
 

The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.

 

Example :

Input :

200  -> Value of V
540   -> Value of W
Output :

TW =130 FW=70
 

Explanation:

130+70 = 200 vehicles

(70*4)+(130*2)= 540 wheels
*/

#include <iostream>

using namespace std;

int main(){

    int v,w;
    cin >> v >> w;
    int wheel2 = w/3;
    int wheel4 = w - wheel2;
    if(w >= 2 && w%2 == 0 && v<w)
    {
        int x = (4*v-w)/2;
        cout << "TW = " << x << " " << "FW = " << v - x << endl;
    }
    else
        cout << "INVALID INPUT" <<endl;
    return 0;
}