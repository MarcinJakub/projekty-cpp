#include <iostream>
#include <string>

int modifyString(std::string& str){
    std::cout << str << '\n';
    std::string str1{"Other string"};
    str = str1;
}

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
