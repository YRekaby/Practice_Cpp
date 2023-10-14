#include <iostream>
#include <string.h>

class Circle 
{
    private:
    int Radius;

    public:

    void setradius(int local_Radius)
    {
        Radius = local_Radius;
    }

    int getradius()
    {
        return Radius;
    }


    int getArea()
    {
        return 3.14 * Radius * Radius;
    }

    int getCircumference()
    {
        return 2 * 3.14 * Radius;
    }
};

int main()
{
    int Radius;
    Circle circ;
    std::cout << "Enter the radius of the circle : ";
    std::cin >> Radius;
    circ.setradius(Radius);
    std::cout << "Area = " << circ.getArea() << "\nCircumference = " << circ.getCircumference() << std::endl;

    
    return 0;
}