#include <iostream>
#include <array>
//abstract class
class Shape
{

    public:

    virtual void Show() = 0; //pure virtual function
};

class Circle : public Shape{

    public:
    void Show() override //override the function in child class from parent
    {
        std::cout << "Show circle\n";
    }
};

class Triangle : public Shape
{
    public:
    void Show() override
    {
        std::cout << "Show Trianlge\n";
    }
};

void MakePicture(std::array<Shape*,2> list)
{
    for(auto shape : list)
    {
        shape->Show();
    }
}
int main()
{
    Circle c1;
    Triangle t1;
    Shape *sptr = &c1;
    sptr->Show(); // Circle show not Shape show
    std::array<Shape*,2> shapes;
    shapes[0] = &c1; // Show Circle (No.1 in array)
    shapes[1] = &t1; // Show triangle (No.2 in array)

    MakePicture(shapes);

    return 0;
}