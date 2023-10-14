#include <iostream>

int main()
{
int *p = nullptr;
int x = 10;

int y = 800;
p = &y;

*p += 200;
std::cout << "Dereference of pointer : " << *p << std::endl;

p = &x; 
*p = 18;
    std::cout << "Address of Pointer : " << &p
    << "\npointer p value : " << p
    << "\nAddress of x : " << &x
    << "\nDereference p : " << *p
    << std::endl;

return 0;
}
