#pragma once
#include <string>
#include <vector>

using namespace std;

class Task {
private:
    int id;
    string name;

    int duration;
    int start_time;
    int end_time;

    vector<int> dependencies;
    vector<int> employees;
    vector<int> resources;

    int status;

public:
    Task();
    Task(int id, const string& name, int duration);

    int getId() const;
    string getName() const;
    int getDuration() const;

    void setStartTime(int t);
    void setStatus(int s);

    void addDependency(int task_id);
    void addEmployee(int emp_id);
    void addResource(int res_id);
};