#include <stdio.h>
#include <time.h>
#include <stdbool.h>

//TO FIND YEAR
int main(void){
    printf("Hello, world\n");
    long seconds = time(NULL);
    int year = 1970; //Epoch year
    long hours = 0; 
    long days = seconds / 86400;

    while ( ((days >= 365) && (year % 4 !=0)) || ((days >= 366) && (year % 4 == 0)) )
    {
        if (year % 4 == 0){
            year++;
            hours = hours + 8784;
            days = days - 366;
        }
        else {
            if (year % 4 != 0){
                year++;
                hours = hours + 8760;
                days = days - 365; 
            }
        }
    }






    bool isLeap = (year % 4 == 0);
    bool isFound;
    int month = 0;

    int leapMonths[12] = {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
    //{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int notLeapMonths[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    //{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//TO FIND MONTH
if (isLeap){
    while (!isFound){
        for (int i=0; i<=11; i++){
            month++;
            if (days <= leapMonths[i]){
                isFound = true;
                break;
            }
        }
    }
}
else {
    while (!isFound){
        for (int i=0; i<=11; i++){
            month++;
            if (days <= notLeapMonths[i]){
                isFound = true;
                break;
            }
        }
    }
}






int dayOfMonth = days + 1;

//TO FIND DAY OF MONTH
if (isLeap){
    dayOfMonth = dayOfMonth - leapMonths[month - 2];
}
else {
  dayOfMonth = dayOfMonth - notLeapMonths[month - 2];
}





//TO FIND HOUR AND MINUTES OF THE DAY 

hours = hours + (days * 24); //total hours leading up to today 
long minutes = hours * 60; //total minutes leading up to today 

long hours2 = seconds / 3600; //total hours in this second 
long minutes2 = seconds / 60; //total minutes in this second

long hourOfTheDay = hours2 - hours; //the hours that have passed today 

long minutesOfTheDay = minutes2 - minutes; //minutes that have passed today 
long minutesOfTheHour = minutesOfTheDay - (hourOfTheDay * 60); //minutes of the current hour





printf("%li:%li %i/%i/%i\n", hourOfTheDay, minutesOfTheHour, dayOfMonth, month, year);

}




