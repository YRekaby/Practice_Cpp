#include <iostream>

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void setDay (int d) 
    {
        day = d;
    }

    int getDay() 
    {
        return day;
    }
    void setMonth(int m)
    {
        month = m;
    }
    int getMonth()
    {
        return month;
    }
    void setYear(int y)
    {
        year = y;
    }
    int getYear()
    {
        return year;
    }
    bool valid()
    {
        if (month < 1 || month > 12)
        return false;
        if (day < 1 || day > 31)
        return false;
    
    else {
        return true;
    }

    }
    bool leapyear()
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
        return true;
        else 
        return false;
    }

    void printdate(){
        std::cout << "Date :" << day << "/" << month << "/"
        << year << std::endl;
    }
 
    };


int main()
{
    Date date;
    int day, month, year;
    std::cout << "Enter the day: ";
    std::cin >> day;
    date.setDay(day);

    std::cout << "Enter the month: ";
    std::cin >> month;
    date.setMonth(month);

    std::cout << "Enter the year: ";
    std::cin >> year;
    date.setYear(year);


     if (date.valid()) {
    std::cout << "Date is valid." << std::endl;
     }
    else  {
    std::cout << "Date is invalid." << std::endl;
    
     }
    if (date.leapyear()) {
    std::cout << "It is a leap Year." << std::endl;
    }
    else {
    std::cout << "It is not a leap year." << std::endl;
}
date.printdate();
}