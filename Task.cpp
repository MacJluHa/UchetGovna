#include "Task.h"

using namespace std;

Task::Task() : id(0), name(""), duration(0), start_time(0), end_time(0), status(0) {}

Task::Task(int id, const string& name, int duration) : id(id), name(name), duration(duration), start_time(0), end_time(0), status(0) {}

int Task::getId() const { return id; }
string Task::getName() const { return name; }
int Task::getDuration() const { return duration; }

void Task::setStartTime(int t) {
    start_time = t;
    end_time = start_time + duration;
}

void Task::setStatus(int s) {
    status = s;
}

void Task::addDependency(int task_id) {
    dependencies.push_back(task_id);
}

void Task::addEmployee(int emp_id) {
    employees.push_back(emp_id);
}

void Task::addResource(int res_id) {
    resources.push_back(res_id);
}