#include <iostream>

void input(int matrix[2][2])
{
    for (int row = 0; row < 2; row++)
    {
        for(int column = 0; column < 2; column++)
        {
            std::cin >> matrix[row][column];
        }
    }

}

void display(int matrix[2][2])
{
for (int row = 0; row < 2; row++)
    {
        for(int column = 0; column < 2; column++)
        {
                        std::cout << "Matrix[" << row << "][" << column
            << "] = " << matrix[row][column] << std::endl;
        }
    }
}
int main()
{
    int matrix[2][2];
    std::cout << "Please enter matrix values\n";
    input(matrix);
    display(matrix);
return 0;
    }
