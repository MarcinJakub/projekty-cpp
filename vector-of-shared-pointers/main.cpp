#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate (int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i < count - 1; i++){

    }

    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec){

}

void add10(std::vector<std::shared_ptr<int>> vec){

}

void sub10(std::vector<std::shared_ptr<int>> vec){

}

int main()
{
    auto vec = generate(10);
    print(vec);
    add10(vec);
    print(vec);
    sub10(vec);
    print(vec);
}
