#include <iostream> 

int main()
{
int sensor_data[5] = {13 , 36 , 74 , 84 , 105};


for (int counter = 0; counter < 5 ; counter++)
{
    std::cout << "Sensor_data [" << counter << "] = " << sensor_data[counter] << std::endl;
    if (sensor_data[counter] == 105)
    {
        std::cout << "Theshold is detected" << std::endl;

    }
}


return 0;
}

