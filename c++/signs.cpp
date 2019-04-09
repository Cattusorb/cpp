#include <iostream> 
using namespace std; 

int main() { 
	// Showing differences between unsigned and signed integers
	short int a; // this is a signed short integer 
	short unsigned int b; // this is an unsigned short integer
	
	b = 50000; 
	a = b; 

	cout << "this is a: " << a << " this is b: " << b; 

	return 0; 
} 
