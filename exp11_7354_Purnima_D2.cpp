#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() const = 0; // Pure virtual function

    virtual ~Employee() {} // Virtual destructor to ensure proper cleanup
};


class FullTimeEmployee : public Employee {
private:
    double salary;

public:
    FullTimeEmployee(double _salary) : salary(_salary) {}

    // Override calculateSalary() for full-time employees
    virtual double calculateSalary() const override {
        return salary;
    }
};


class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    // Override calculateSalary() for part-time employees
    virtual double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};


class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double base, double _bonus) : baseSalary(base), bonus(_bonus) {}

    // Override calculateSalary() for managers
    virtual double calculateSalary() const override {
        return baseSalary + bonus;
    }
};

int main() {
    // Example usage
    FullTimeEmployee fullTimeEmp(5000.0);
    PartTimeEmployee partTimeEmp(15.0, 20);
    Manager manager(7000.0, 2000.0);

    cout << "Full-time employee salary: " << fullTimeEmp.calculateSalary() << endl;
    cout << "Part-time employee salary: " << partTimeEmp.calculateSalary() << endl;
    cout << "Manager's salary:" << manager.calculateSalary() << std::endl;

    return 0;
}

