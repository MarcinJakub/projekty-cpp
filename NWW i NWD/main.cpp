#include <iostream>

using namespace std;

int NWD(int a, int b){
    if(a <= 0 || b <= 0){
        cout << "B£¥D! Podane liczby musz¹ byæ liczbami dodatnimi.";
    }

    while( a != b){
        if(a < b){
            b -= a;
        }
        if(a > b){
            a -= b;
        }
    }

    return a;
}

int NWW(int a, int b){
    return a*b/NWD(a,b);
}

int main()
{
    int a = 255;
    int b = 15;

    cout << NWD(a,b) << endl;
    cout << NWW(a,b) << endl;
    return 0;
}
