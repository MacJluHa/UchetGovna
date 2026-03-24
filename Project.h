#pragma once
#include <string>
#include <unordered_map>

#include "Task.h"
#include "Employee.h"
#include "Resource.h"

using namespace std;

class Project {
private:
    int id;
    string name;

    unordered_map<int, Task> tasks;
    unordered_map<int, Employee> employees;
    unordered_map<int, Resource> resources;

public:
    Project(int id, const string& name);

    void addTask(const Task& task);
    void addEmployee(const Employee& emp);
    void addResource(const Resource& res);

    Task* getTask(int id);
    Employee* getEmployee(int id);
    Resource* getResource(int id);
};