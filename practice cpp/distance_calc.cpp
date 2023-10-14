/*Description: Convert from Miles to KM

Input : distance in mile
formula : distance_in_km = ditsance_in_mile * 1.609
Output : distance in km

*/
#include <iostream>

int main()
{
   int distance_in_miles = 0;
   float distance_in_km = 0.0;
   std::cout << "Enter the distance" << std::endl;
   std::cin >> distance_in_miles;

   distance_in_km = distance_in_miles * 1.609;
   std::cout << "Distance in km = " << distance_in_km << std::endl;

return 0;
}
