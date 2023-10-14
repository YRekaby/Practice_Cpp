#include <iostream>

int main()
{
    int price_oranges[7] = {10 , 12 , 13 , 13 , 14 , 15 , 17};

    for (int i = 0 ; i < 7 ; i++)
    {
            std::cout << "price_oranges [" << i << "] = " << price_oranges[i] << std::endl;
    }

    char word[5] = {'h', 'e', 'l', 'l', 'o'};
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = i+1 ; j < 5; j++)
        {
            if (word[i] == word[j])
            {
                word[i] = ' ';
            }
        }
        std::cout << word[i] << std::endl;



    }
    return 0;
}