#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

Employee :: Employee()
{
    id = 0;
    name = "";
    salary = 0;
}
Employee::Employee(int Id, string Name, int Salary)
{
    Id = id;
    Name = name;
    Salary =salary;
}
int Employee::setID(int Id)
{
    id = Id;
}
int Employee::setSalary(int Salary)
{
    salary = Salary;
}
string Employee::setName(string Name)
{

    name = Name;
}
void Employee::getID()
{
    return id;
}
void Employee::getName()
{
    return name;
}
void Employee::getSalary()
{
    return salary;
}
void Employee::Print()
{
    cout<< getID() << " " << getName() << " " << getSalary() << endl;
}

bool Employee::operator!=(Employee e)
{

    return (id != e.id);
}

