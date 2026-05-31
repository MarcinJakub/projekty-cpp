#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    auto j = i++ - 1;

    cout << j << endl;
    cout << i;

    return 0;
}
