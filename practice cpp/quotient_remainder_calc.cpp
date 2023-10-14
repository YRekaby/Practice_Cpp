/*Description : Compute quotient and remainder after user enters the dividend and divisor

Input : Dividend , Divisor

Formulas : 
1.Quotient = Dividend / Divisor
2.Remainder = Dividend % Divisor

Output : Quotient , Remainder

*/

#include <iostream>

int main()
{
    int dividend = 0.0;
    int divisor = 0.0;

    std::cout << "Enter the Dividend : " << std::endl;
    std::cin >> dividend;

    std::cout << "Enter the Divisor : " << std::endl;
    std::cin >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    std::cout << "Quotient = " << quotient << std::endl;
    std::cout << "Remainder = " << remainder << std::endl;

    return 0;




}