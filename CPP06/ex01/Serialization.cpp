#include "Serialization.hpp"

Serialization::Serialization() {}
Serialization::Serialization(const Serialization& other) {
    (void)other;
}
Serialization& Serialization::operator=(const Serialization& other) {
    (void)other;
    return *this;
}

uintptr_t Serialization::serialize(data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

data* Serialization::deserialize(uintptr_t raw) {
    return reinterpret_cast<data*>(raw);
}