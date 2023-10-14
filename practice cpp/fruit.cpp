#include <string>
#include <iostream>

struct Fruit
{
    double price_kg;
    double weight;
    double total = weight * price_kg;


};

int main()
{
    Fruit fruit1;
    fruit1.price_kg = 0.0;
    fruit1.weight = 0.0;
 

    std::cout << "Enter variables\n ";
    std::cin >> fruit1.price_kg >> fruit1.weight;
       
       fruit1.total = fruit1.weight * fruit1.price_kg;


    std::cout << "Total = " << fruit1.total << std::endl;

    return 0;
}