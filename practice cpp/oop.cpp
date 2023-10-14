#include <string>
#include <iostream>

class Employee
{
    public:
    int id;
    int salary;
    std::string name;
    bool hire_status;

    Employee()
    {
        std::cout << "Constructer is called\n";
    }

    void Hire()
    {
        hire_status = true;
    }
    void Fire()
    {
        hire_status = false;
    }

    void display()
    {
        std::cout << "id: " << id
                <<"\nname: " << name
                << "\nsalary: " << salary
                << "\nHired: " << hire_status << std::endl;

    }
};

Employee empl;

int main()
{
    empl.id = 1;
    empl.name = "Yahya";
    empl.salary = 15000;
    empl.Hire();
    empl.display();
    
    Employee empl2;

    return 0;


}
