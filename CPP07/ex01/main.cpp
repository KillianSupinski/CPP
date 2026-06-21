#include "iter.hpp"

template<typename T>
void print(T const& n)
{
    std::cout << n << std::endl;
}

template<typename T>
void increment(T& n)
{
    ++n;
}

int main()
{
    int numbers[3] = {1, 2, 3};

    std::cout << "Before increment:" << std::endl;
    iter(numbers, 3, print<int>);

    iter(numbers, 3, increment<int>);

    std::cout << "After increment:" << std::endl;
    iter(numbers, 3, print<int>);

    const int constNumbers[3] = {10, 20, 30};

    std::cout << "Const array:" << std::endl;
    iter(constNumbers, 3, print<int>);

    std::string words[3] = {"hello", "cpp", "templates"};

    std::cout << "String array:" << std::endl;
    iter(words, 3, print<std::string>);

    return 0;
}