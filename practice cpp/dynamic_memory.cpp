#include <iostream>

void DynamicArrayFunction()
{
    int *p = new int[5];

    if(p != nullptr)
    {
        for (int i = 0; i < 5; i++)
        {
            p[i] = 10 + p[i - 1];
            std::cout << "p[" << i << "] = " << p[i] << std::endl;

        }
    }

    delete [] p;
}

int main()
{
    DynamicArrayFunction();

    return 0;

}

