#include <iostream>
int main()
{
    char word[] = {'R', 'O', 'B', 'O', 'T', 'I', 'C', 'S', ' ', 'C', 'O', 'R', 'N', 'E', 'R'};
    int n = sizeof(word);
    int j = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (word[i] != ' ') {
            word[j] = word[i];
            j++;
        }
    }
     word[j] = '\0';
    std::cout << word << std::endl;
    

    return 0;
}