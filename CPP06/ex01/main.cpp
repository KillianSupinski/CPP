#include "Serialization.hpp"
#include <iostream>


int main(){
    data myData;
    myData.value = 42;
    myData.name = "Hello, World!";

    std::cout << "Original pointer: " << &myData << std::endl;
    uintptr_t serialized = Serialization::serialize(&myData);
    std::cout << "Serialized pointer: " << serialized << std::endl;
    std::cout << "Original value: " << myData.value << std::endl;
    std::cout << "Original name: " << myData.name << std::endl;
    data* deserialized = Serialization::deserialize(serialized);
    std::cout << "Deserialized pointer: " << deserialized << std::endl;
    std::cout << "Deserialized value: " << deserialized->value << std::endl;
    std::cout << "Deserialized name: " << deserialized->name << std::endl;

    if (deserialized == &myData) {
        std::cout << "Deserialization successful: pointers match." << std::endl;
    } else {
        std::cout << "Deserialization failed: pointers do not match." << std::endl;
    }
}