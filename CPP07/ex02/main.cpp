#include "Array.hpp"

int main()
{
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        intArray[i] = i * 10;
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";
    for (unsigned int i = 0; i < stringArray.size(); ++i)
    {
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }
    try
    {
        std::cout << "test hors range: " << intArray[10] << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}
