#include <iostream>

void Calculate(int first, int second, int *sum, int *prod)


{
    *sum = first + second; //dereference 
    *prod = first * second; //dereference

}


int main()

{
    int n1 = 0;
    int n2 = 0;
    int sum = 0;
    int product = 0;
    std::cout << "please enter the two numbers" << std::endl;
    std::cin >> n1;
    std::cin >> n2;

    Calculate(n1, n2, &sum, &product);

    std::cout << "sum = " << sum << std::endl;
    std::cout << "product = " << product << std::endl;

    return 0;
}