/*
Description : Calculate area of circle

Input : Radius

Formula : Radius * Radius * PI

Output : Area


*/

#include <iostream>

int main()
{
    float Radius = 0.0;
    const float PI = 3.14;



    std::cout << "Enter the Radius : " << std::endl;
    std::cin >> Radius ;
    float Area = Radius * Radius * PI ;
    std::cout << "Area of circle = " << Area << std::endl;

    return 0;


}