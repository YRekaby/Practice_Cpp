#include <iostream>

int main()
{
    std::cout << "Enter on of these Types \n" <<
    "1. Char\n"<<
    "2. Short\n"<<
    "3. Int\n";

    int Type;
    std::cin >> Type;

    if (Type == 1)
    {
        std::cout << "Size of Char: " << sizeof(char) << "\n";

    }
    
    else if(Type == 2)
    {
        std::cout << "Size of Short: " << sizeof(short) << "\n";
    }

    else if(Type == 3)
    {
        std::cout << "Size of Int: " << sizeof(int) << "\n";
    }

    else
    {
        std::cout << "Please enter one of the supported types !" << std::endl;

    }

return 0;
}