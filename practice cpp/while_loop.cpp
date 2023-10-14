#include <iostream>

int main()
{

    char sentence[13]= "Good Morning";

    int countVowels = 0 ;
    int i = 0;
    do
    {
     if (sentence[i] == 'a' || 
        sentence[i] == 'e' || 
        sentence[i] == 'o' ||
        sentence[i] == 'i' || 
        sentence[i] == 'u')  
        {
            countVowels++;
        } 
        i++;
    
    std::cout << "sentence [ "<<i<<"]=" << sentence [i] << std::endl;
    } while( i < 13);
    std::cout << "Vowel count = " << countVowels << std::endl;
    }
    