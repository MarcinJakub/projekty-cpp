#include <iostream>
#include <vector>

int addEven(std::vector<int>& numbers){
    int wynik;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 == 0){
            wynik += numbers[i];
        }
    }
    return wynik;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    auto result = addEven(vec);  // result = 6;
    std::cout << result;

    return 0;
}
