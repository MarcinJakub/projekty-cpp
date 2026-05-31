#include <iostream>
#include <vector>

std::vector <int> generateSequence(int count, int step){
    std::vector <int> sequence;
    int sum = step;
    for(int i = 0; i < count; i++){
        sequence.push_back(sum);
        sum += step;
    }
    return sequence;
}

int main()
{
    auto result = generateSequence(5, 3);  // result = {3, 6, 9, 12, 15}

    for(int el : result)
        std::cout << el << " ";

    return 0;
}
