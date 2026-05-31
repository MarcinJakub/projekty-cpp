#include <iostream>

using namespace std;
//Write you function here
void printString(string text, int n){
    for(int i = 0; i < n; i++){
        cout << text << "\n";
    }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}

