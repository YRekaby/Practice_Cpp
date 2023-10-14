#include <iostream>
#include <string>

struct Student
{
    int ID;
    int age;
    std::string name;
    double GPA;
};

int main()
{
    Student *student_parameters = new Student[3];

    for (int i = 1; i < 4; i++)
    {
        std::cout << "Enter student details\nID: ";
        std::cin >> student_parameters[i].ID;
        std::cout << "Name: ";
        std::cin >> student_parameters[i].name;
        std::cout << "Age: ";
        std::cin >> student_parameters[i].age;
        std::cout << "GPA: ";
        std::cin >> student_parameters[i].GPA;
    }
    for (int i = 1; i < 4; i++)
    {
        std::cout << "Student[" << i << "] ID: " << student_parameters[i].ID << std::endl;
        std::cout << "Student[" << i << "] Name: " << student_parameters[i].name << std::endl;
        std::cout << "Student[" << i << "] Age: " << student_parameters[i].age << std::endl;
        std::cout << "Student[" << i << "] GPA: " << student_parameters[i].GPA << std::endl;
    }
    delete [] student_parameters;
    return 0;
}