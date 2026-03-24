#include "Project.h"

using namespace std;

Project::Project(int id, const string& name) : id(id), name(name) {}

void Project::addTask(const Task& task) {
    tasks[task.getId()] = task;
}

void Project::addEmployee(const Employee& emp) {
    employees[emp.getId()] = emp;
}

void Project::addResource(const Resource& res) {
    resources[res.getId()] = res;
}

Task* Project::getTask(int id) {
    if (tasks.find(id) != tasks.end())
        return &tasks[id];
    return nullptr;
}

Employee* Project::getEmployee(int id) {
    if (employees.find(id) != employees.end())
        return &employees[id];
    return nullptr;
}

Resource* Project::getResource(int id) {
    if (resources.find(id) != resources.end())
        return &resources[id];
    return nullptr;
}