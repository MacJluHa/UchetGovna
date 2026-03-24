#pragma once
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
    int id;
    string name;

    vector<string> skills;
    vector<int> tasks;

public:
    Employee();
    Employee(int id, const string& name);

    int getId() const;
    string getName() const;

    void addSkill(const string& skill);
    void addTask(int task_id);
};