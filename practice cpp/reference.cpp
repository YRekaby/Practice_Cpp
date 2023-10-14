#include <iostream>

void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{

    int x = 5;
    int y = 50;
    int &r = x;
    r = 10;

    swap(x, y);

    std::cout << "x: " << x << "y: " << y <<std::endl;
    
    return 0;
}