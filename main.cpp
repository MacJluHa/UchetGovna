#include <iostream>
#include "Project.h"

int main() {
    Project project(1, "Software Development");

    Employee e1(1, "Alice");
    Employee e2(2, "Bob");

    project.addEmployee(e1);
    project.addEmployee(e2);

    cout << "Employees created: "
        << e1.getName() << ", "
        << e2.getName() << "\n\n";

    Resource r1(1, "CPU", 10);
    project.addResource(r1);

    cout << "Resource created: " << r1.getName() << "\n\n";

    Task t1(1, "Design", 5);
    Task t2(2, "Implementation", 10);

    cout << "Tasks created: "
        << t1.getName() << " and "
        << t2.getName() << "\n\n";

    t2.addDependency(t1.getId());

    cout << t2.getName()
        << " depends on "
        << t1.getName() << "\n\n";

    t1.addEmployee(e1.getId());
    t2.addEmployee(e2.getId());

    cout << t1.getName()
        << " added to "
        << e1.getName() << "\n";

    cout << t2.getName()
        << " added to "
        << e2.getName() << "\n\n";

    t1.addResource(r1.getId());

    cout << t1.getName()
        << " use resource: "
        << r1.getName() << "\n\n";

    project.addTask(t1);
    project.addTask(t2);

    cout << "Tasks added to project\n\n";

    Resource* cpu = project.getResource(r1.getId());

    if (cpu) {
        cout << "Allocating resource: " << cpu->getName() << "\n";

        if (cpu->allocate(5)) {
            cout << "Success\n";
        }
        else {
            cout << "Failed\n";
        }
    }

    return 0;
}