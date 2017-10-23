#include <iostream>
#include <ctime>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int get_day_of_week(int,int,int);

bool isleap (int year){
    
    if ( ( !(year % 4) && (year % 100) ) || !(year % 400) )
        return (true);
    else
        return (false);
}

int number_of_month_days(int month, int year){ //4.1 Find lenght of Month

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2)
    { bool isleap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isleap)
            return 29;
        else
            return 28;
    }  
    else  
        return 31;
    
}

//int dayOfWeek (int month, int day, int year){
    
  //  return (get_century_value(year) + );
//}

//4.2 Find the Day of the Week
int get_day_of_week(int month, int day, int year){
    
    int weekDay;
    if (year < 0)			//invalid year
        return 0;
    else
    {
        if (month < 3) //Jan = 13 & Feb = 14 and year is the previous year
        {
            month += 12;
            year  -= 1;
        }
        weekDay = (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400 + 1) % 7;
        
        if (month > 12)
        {						//reset Jan & Feb back to 1 &2
            month -= 12;
            year  += 1 ;
        }
        
        
    }
    return weekDay;
}

/* int get_day_of_week2(int month, int day, int year) //Find the Day of the week
{
    //Uspensky and Heaslet gave the following formula, in Elementary Number Theory, 1939, for the Gregorian calendar:
    
    // W=D+floor(2.6m-0.2)+y+floor(y/4)+floor(c/4)-2c (mod 7)
    
    int weekDay,century;
    
    century=year/100;
    weekDay=(day+((int) floor(2.6*month-0.2)+year)+(int) floor(year/4.0)+((int) floor(century/4.0)-2*century))%7;
    
    return weekDay;
}
 */

int number_of_days_in_a_year(int year)
{
    //Code here
    return 0;
}

int get_first_day_of_year (int year){
    double dyear=(double) year;
    int first_day_of_year;
    first_day_of_year = ( ((year - 1) * 365) + ( (int) floor((dyear - 1) / 4) ) + ( (int) (floor(dyear - 1) / 100 )) + ( (int) floor((dyear - 1) / 400 )))%7;
    
    return first_day_of_year;
    
}

int get_first_day_of_month (int month, int year){
    //Code here
    return 0;
}


string get_month_name(int month){
   
    switch (month){
        case 1:
            return "January";
            break;
        case 2:
            return "February";
            break;
        case 3:
            return "March";
            break;
        case 4:
            return "April";
            break;
        case 5:
            return "May";
            break;
        case 6:
            return "June";
            break;
        case 7:
            return "July";
            break;
        case 8:
            return "August";
            break;
        case 9:
            return "September";
            break;
        case 10:
            return "October";
            break;
        case 11:
            return "November";
            break;
        case 12:
            return "December";
            break;
            
    }
    return 0;
}


string get_day_of_week_short_name(int get_day_of_week){
    string day_of_week;
    if (get_day_of_week == 0)
        day_of_week = "Sun";
    else if (get_day_of_week == 1)
        day_of_week = "Mon";
    else if (get_day_of_week == 2)
        day_of_week = "Tue";
    else if (get_day_of_week == 3)
        day_of_week = "Wed";
    else if (get_day_of_week == 4)
        day_of_week = "Thu";
    else if (get_day_of_week == 5)
        day_of_week = "Fri";
    else if (get_day_of_week == 6)
        day_of_week = "Sat";
    return day_of_week;

}

string get_day_of_week_name(int get_day_of_week){
    
    string day_of_week;
     if (get_day_of_week == 0)
         day_of_week = "Sunday";
     else if (get_day_of_week == 1)
         day_of_week = "Monday";
     else if (get_day_of_week == 2)
         day_of_week = "Tuesday";
     else if (get_day_of_week == 3)
         day_of_week = "Wednesday";
     else if (get_day_of_week == 4)
         day_of_week = "Thursday";
     else if (get_day_of_week == 5)
         day_of_week = "Friday";
     else if (get_day_of_week == 6)
         day_of_week = "Saturday";
    return day_of_week;
}

int day_of_forever(int month, int day, int year){
    //Code here
    return 0;
}


void write_day_names_console() {
    
    cout << "\n\t SUN MON TUE WED THU FRI SAT\n\t";
 }


void draw_calendar_console(int month,int year){
    
    write_day_names_console();
     int spacesCount = get_day_of_week(month, 1, year);
     for (int i = 0; i < spacesCount; i++)
     cout << setw(4) << "";
     int days = number_of_month_days(month, year);
     for (int j = 1; j <= days; j++){
     cout << setw(4) << j;
     if((spacesCount +j) % 7 == 0)
     cout << "\n\t";
}
}
int main(){
    int month, year, day;
    bool more;
    char c;
    more=true;
    while (more)
    {
        cout<<"********************Welcome to BTE320 Calendar*************************"<<endl<<endl;
        cout << "Please enter the year:";
        cin >> year;
        cout<<endl;
        cout << "Please enter the month (1 for Jan, 2 for Feb, etc.):";
        cin >> month;
        cout<<endl;
        cout << "Please enter the day (0 for Sunday, 1 for Monday, etc.):";
        cin >> day;
        cout<<endl;
        
        
        cout << "1. Length of a Month— Number of Days in " << get_month_name(month) << ": " << number_of_month_days(month, year)<< endl; // 4.1 Function Test-- working
        //cout << day_of_year(month, day, year) << endl; //4.2
        //cout << get_day_of_week(month, day, year) << endl; // 4.5 Function Test-- working
        cout << get_day_of_week_short_name(day) << endl; // function working
        cout << get_day_of_week_name(day) << endl; //function working
       
        
        
        cout<<"*************  "<<get_month_name(month)<<" "<<year<<"  ************"<<endl<<endl;
        draw_calendar_console(month, year);
        cout<<endl;
        cout<<"\n Would you like to view another calendar?(Enter N to end the program):";
        cin>>c;
        if (c=='N' || c=='n'){
            more=false;
            exit(0);
        }
    }
    return 0;
}


