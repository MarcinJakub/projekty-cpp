#include <iostream>
#include <memory>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

auto calculateProduct(int val1, int val2){
    int number = val1 * val2;
    return std::make_shared<int>(number);
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
