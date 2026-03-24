#include "Resource.h"

using namespace std;

Resource::Resource() : id(0), name(""), capacity(0), available(0) {}
Resource::Resource(int id, const string& name, int capacity) : id(id), name(name), capacity(capacity), available(capacity) {}

int Resource::getId() const { return id; }
string Resource::getName() const { return name; }

bool Resource::allocate(int amount) {
    if (available >= amount) {
        available -= amount;
        return true;
    }
    return false;
}

void Resource::release(int amount) {
    available += amount;
    if (available > capacity)
        available = capacity;
}