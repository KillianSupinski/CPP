
#include <string>
#include <stdint.h>


struct data {
    int value;
    std::string name;
};

class Serialization {
public:
    static uintptr_t serialize(data* ptr);
    static data* deserialize(uintptr_t raw);
private:
    Serialization();
    Serialization(const Serialization& other);
    Serialization& operator=(const Serialization& other);
    ~Serialization();
};