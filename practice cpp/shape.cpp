#include <iostream>

class Shape {
    public:
    int width;
    int height;
    Shape(int w, int h) : width(w), height(h) {}
};

class Triangle : public Shape {
    public:
    Triangle(int w, int h) : Shape(w, h) {}
    int area(){
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
    public:
    Rectangle(int w, int h) : Shape(w, h) {}
    int area() {
        return width * height;
    }
};

int main()
{
    Triangle triangle(4, 6);
    Rectangle rectangle(4, 5);

    std::cout << "Triangle Area = " << triangle.area() << std::endl;
    std::cout << "Rectangle Area = " << rectangle.area() << std::endl;
}