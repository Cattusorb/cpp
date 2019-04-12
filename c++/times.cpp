#include <iostream>
#include <cmath> 
using namespace std; 

int main() { 

	// There are several time functions that c++ inherates from c
	// time_t time(time_t *time); 
	// char *ctime(const time_t *time); 
	// struct tm *localtime(const time_t *time);
	// clock_t clock(void); 
	// char * asctime (const struct tm * time); 
	// struct tm *gmtime(const time_t *time); 
	// time_t mktime(struct tm *time); 
	// double difftime(time_t time2, time_t time1);
	// size_t strftime(); 
	
	// Variable for current date/time based on the current system
	time_t now = time(0); 
	char* dt = ctime(&now); // This will convert the now to a string
       	
	cout << "The local date and time is: " << dt << endl; 

	// convert now to tm struct for UTC
	tm *gmtm = gmtime(&now); 
	dt = asctime(gmtm); 

	cout << "The UTC date and time is: " << dt << endl; 

	tm *ltm = localtime(&now); 

	// Print components 
	cout << "Year: " << 1900 + (*ltm).tm_year << endl; 
	cout << "Month: " << 1 + (*ltm).tm_mon << endl; 
	cout << "Day: " << (*ltm).tm_mday << endl; 
	cout << "Time: " << 1 + (*ltm).tm_hour << ":"; 
	cout << 1 + (*ltm).tm_min << ":" << 1 + (*ltm).tm_sec << endl; 

	return 0; 
} 
