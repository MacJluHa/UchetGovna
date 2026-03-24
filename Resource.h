#pragma once
#include <string>

using namespace std;

class Resource {
private:
    int id;
    string name;

    int capacity;
    int available;

public:
    Resource();
    Resource(int id, const string& name, int capacity);

    int getId() const;
    string getName() const;

    bool allocate(int amount);
    void release(int amount);
};