#include <iostream>
#include <string.h>

class Person
{
    private:
    std::string name;
    int age;
    std::string country;

    public:
    void setname(std::string N)
    {
        name = N;
    }

    std::string getname()
    {
        return name;
    }

    void setage(int A)
    {
        age = A;
    }

    int getage()
    {
        return age;
    }
    void setcountry(std::string C)
    {
        country = C;
    }
    std::string getcountry()
    {
        return country;
    }

    void display()
    {
        std::cout << "Name: " << getname() << std::endl;
        std::cout << "Age: " << getage() << std::endl;
        std::cout << "Country: " << getcountry() << std::endl;

    }
};

int main()
{
    Person person;
    person.setname("Yehia Mohamed");
    person.setage(23);
    person.setcountry("Egypt");
    person.display();
}