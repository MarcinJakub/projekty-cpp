#include <iostream>

std::string calculate(const std::string& command, int first, int second){
    if(command == "add"){
        return std::to_string(first + second);
    }
    else if(command == "substract"){
        return std::to_string(first - second);
    }
    else if(command == "multiply"){
        return std::to_string(first * second);
    }
    else if(command == "divide"){
        return std::to_string(first / second);
    }
    else{
        return "Invalid data";
    }
}

int main()
{
    int a = 15;
    int b = 3;

    std::cout << a << " + " << b << " = " << calculate("add",a,b) << "\n";
    std::cout << a << " - " << b << " = " << calculate("substract",a,b) << "\n";
    std::cout << a << " * " << b << " = " << calculate("multiply",a,b) << "\n";
    std::cout << a << " / " << b << " = " << calculate("divide",a,b) << "\n";
    std::cout << a << " ? " << b << " = " << calculate("hello",a,b);

    return 0;
}
