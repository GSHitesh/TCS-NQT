/******************************************************************************


*******************************************************************************/
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int Oxy[9];
    int level;
    for(int i=0;i<9;i++){
        cin >> level;
        if(level <100 && level >0)
            Oxy[i] = level;
        else
            cout << "INVALID INPUT";
    }
    
    int T1=0,T2=0,T3=0;
    
    for(int i=0;i<9;i=i+3){
        T1+=Oxy[i];
        T2+=Oxy[i+1];
        T3+=Oxy[i+2];
    }
    
    T1 = T1/3;
    T2 = T2/3;
    T3 = T3/3;
    cout << T1 <<  " " << T2 << " " << T3;
    
    int T[] = {T1,T2,T3};
    int ma = max(T1,max(T2,T3));
    for(int i=0; i<3; i++)
	{
    		if(T[i]==ma)
    		{
        			cout << "Trainee Number :" << i+1;
    		}
    		if(T[i]<70)
    		{
        			cout << "Trainee is Unfit";
    		}
	}
    
    

    return 0;
}