#include <iostream>
#include "functions.h" 
using namespace std; 

int main()
{
	int a = 50, b = 25, total; 
	total = sum(a, b); 
	cout << "a + b = " << total << endl; 
	
	total = diff(a, b); 
	cout << "a - b = " << total << endl; 

	// calling the function again 
	total = sum(a);
        // the output of this function will be 70	
	cout << "total sum of a = " << total << endl; 

	return 0; 
}

int sum(int a, int b) {
	return a + b; 
}

int diff(int a, int b)  { 
	return a - b; 
}
