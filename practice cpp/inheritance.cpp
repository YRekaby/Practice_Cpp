#include <iostream>

class Shape
{
    public:
    void setwidth(int local_width)
    {
        width = local_width;
    }
    int getwidth()
    {
        return width;

    }
    void setheight(int local_height)
    {
        height = local_height;
    }
    int getheight()
    {
        return height;
    }
    int area()
    {
        return width * height;
    }

    private:
    int width;
    int height;


};

class Rectangle : public Shape
{
    public:
    Rectangle()
    {

    }

    void display()
    {
            std::cout << "Area = " << area() << std::endl;
    }
};

int main()
{
    Rectangle rect;
    rect.setwidth(5);
    rect.setheight(10);
    rect.display();
    return 0;

}