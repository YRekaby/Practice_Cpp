#include <iostream>

int main()
{
    unsigned int grade = 0;
    std::cout << "Please enter your grade\n";
    std::cin >> grade;

    if (grade < 50)
    {
        std::cout << "Failed\n";
    }
    else if (grade >= 50 && grade < 65)
    {
        std::cout << "Pass\n";
    }
    else if (grade >= 65 && grade <75)
    {
        std::cout << "Your grade is Good\n";
    }
    else if (grade >=75 && grade < 85)
    {
        std::cout << "Your grade is Very Good\n";
    }
    else if (grade >=85 && grade <= 100)
    {
        std::cout << "Your grade is Excellent\n";
    }
    else
    {
        std::cout << "Please enter Number from 0 - 100\n";
    }

return 0;


}