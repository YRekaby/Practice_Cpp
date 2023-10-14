#include <iostream>

class Complex
{
    public:
    Complex(float r, float i) : real(r), img(i) {}

    Complex operator+(Complex obj)
    {
        Complex result(0,0);
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }

    void display()
    {
        std::cout << real << " +i " << img << std::endl;
    }

    private:
    float real;
    float img;
};

int main()
{
    Complex c1(10.5, 5.5);
    Complex c2(15.5, 7.6);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}