#include "Employee.h"

using namespace std;

Employee::Employee() : id(0), name("") {}
Employee::Employee(int id, const string& name) : id(id), name(name) {}

int Employee::getId() const { return id; }
string Employee::getName() const { return name; }

void Employee::addSkill(const string& skill) {
    skills.push_back(skill);
}

void Employee::addTask(int task_id) {
    tasks.push_back(task_id);
}