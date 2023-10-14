/*Description : Adding two numbers added by user

Input : First number , Second number

Formula : First number + Second number

Output : Sum

*/

#include <iostream>

int main()
{
    int First_Number = 0;
    int Second_Number = 0;

    std::cout << "Enter the First Number : " << std::endl;
    std::cin >> First_Number;

    std::cout << "Enter the Second Number : " << std::endl;
    std::cin >> Second_Number;

    int Sum = First_Number + Second_Number;
    std::cout << "Sum = " << Sum << std::endl;

    return 0;


}