#include <iostream>


void swap(int *n1, int *n2)
{
    std::cout << "Address of Point : " << &n1
    << "\npointer n1 value : " << n1
    << "\nDereference n1 : " << *n1
    << std::endl;

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}

int main()
{
    int x = 10;
    int y = 20;

    swap(&x, &y);

    std::cout << "x = " << x << "\ny = " << y << std::endl;

    return 0;
}