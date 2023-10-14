#include <iostream>

union Fruit
{
    char taste;
    int price;

};

int main()
{
    std::cout << "size of union = " << sizeof(Fruit) << "\n";

    Fruit orange;
    orange.taste = 1;
    orange.price = 35;

    std::cout << "price is " << orange.price << std::endl;
    return 0;
}