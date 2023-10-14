#include <iostream>
double add(double first_num , double second_num)
{
    double result = first_num + second_num;
    return result;

}
double sub(double first_num , double second_num)
{
    double result = first_num - second_num;
    return result;

}
double mul(double first_num , double second_num)
{
    double result = first_num * second_num;
    return result;

}
double div(double first_num , double second_num)
{
    double result = first_num / second_num;
    return result;

}

int main()
{
    char op;
    double First = 0;
    double Second = 0;
    double result;


    std::cout << "Enter the First Number : " << std::endl;
    std::cin >> First;

    std::cout << "Enter the Second Number : " << std::endl;
    std::cin >> Second;

    std::cout << "Enter desired Operator (+ - * /)\n";
    std::cin >> op;

    if (op == '+')
    {
        result = add(First , Second);
    }
    else if (op == '-')
    {
        result = sub(First , Second);
    }
    else if (op == '*')
    {
        result = mul(First , Second);
    }
    else if (op == '/')
    {
        result = div(First , Second);
    }

    std::cout << "Result = " << result << std::endl;

}