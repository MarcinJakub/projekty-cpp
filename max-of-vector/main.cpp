#include <iostream>
#include <vector>

using namespace std;

int maxOfVector(std::vector <int> numbers){
    int max = 0;
    for(int i = 0; i < numbers.size(); i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    std::vector<int> numbers = {6, 78, 12, 54, -11, 0};
    auto result = maxOfVector(numbers);  // result = 78
    std::cout << result << endl;
    return 0;
}
