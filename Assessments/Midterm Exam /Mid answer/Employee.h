#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
using namespace std;


class Employee
{
public:
    Employee();
    Employee(int, string, int);
    int setID(int);
    int setSalary(int);
    string setName(string);
    void getID();
    void getName();
    void getSalary();
    void Print();
    bool operator!=(Employee e);

private:
    int id, name, salary;
};




#endif // EMPLOYEE_H_INCLUDED
