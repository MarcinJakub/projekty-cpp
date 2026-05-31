#include <iostream>

// Write your function here
auto max(int a, int b, int c){
    std::string maks;
    if(a > b && a > c){
        maks = "a";
        return maks;
    }
    else if(b > a && b > c){
        maks = "b";
        return maks;
    }
    else if(c > a && c > b){
        maks = "c";
        return maks;
    }
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
