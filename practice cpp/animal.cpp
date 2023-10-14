#include <iostream>
#include <string.h>

class Animal
{
    public:
    std::string name;
    int age;
    Animal(std::string N, int A) : name(N), age(A) {}
    
 
};

class Zebra : public Animal{
    public:
    Zebra(std::string N, int A) : Animal(N,A) {}

    void display(){
        std::cout << "Zebra Name: " << name << std::endl;
        std::cout << "Zebra Age: " << age << std::endl;
        std::cout << "Zebras are oiginated from Africa" << std::endl;
    }
};

class Dolphin : public Animal {
    public:
    Dolphin(std::string N, int A) : Animal(N,A) {}

    void display(){
        std::cout << "Dolphin Name: " << name << std::endl;
        std::cout << "Dolphin Age: " << age << std::endl;
        std::cout << "Dolphins are found in Oceans all around the world" << std::endl;
    }

};

int main() 
{
    Zebra zebra("Alpha" , 7);
    Dolphin dolphin("Leo" , 10);

    zebra.display();
    dolphin.display();

    return 0;
}