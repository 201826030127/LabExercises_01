// Lab 5: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

Date::Date( int m, int d, int y )
{
   setDate( m, d, y ); // sets date
} // end Date constructor

void Date::setDate( int mo, int dy, int yr )
{
   setMonth( mo ); // invokes function setMonth
   setDay( dy ); // invokes function setDay
   setYear( yr ); // invokes function setYear
} // end function setDate

void Date::setDay( int d )
{
   if ( month == 2 && leapYear() )
      day = ( d <= 29 && d >= 1 ) ? d : 1;
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
} // end function setDay

void Date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1; // sets month
} // end function setMonth

void Date::setYear( int y )
{
   year = y >= 1900 ? y : 1900; // sets year
} // end function setYear

int Date::getDay()
{
   return day;
} // end function getDay

int Date::getMonth()
{
   return month;
} // end function getMonth

int Date::getYear()
{
   return year;
} // end function getYear

void Date::print()
{
   cout << month << '-' << day << '-' << year << '\n'; // outputs date
} // end function print

void Date::Nextday(int y,int m,int d)
{
    day=day+1;
    if(day>monthDays())
    {
        day=1;
        if(month>=12)
        {
            year=year+1;
            month=1;
        }
        else
        month=month+1;

    }

}
bool Date::leapYear()
{
   if ( getYear() % 400 == 0 || ( getYear() % 4 == 0 && getYear() % 100 != 0 ) )
         return true; // is a leap year
      else
         return false; // is not a leap year
} // end function leapYear

int Date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return getMonth() == 2 && leapYear() ? 29 : days[ getMonth() - 1 ];
} // end function monthDays
