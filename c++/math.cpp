#include <iostream> 
#include <cmath>
#include <ctime> 
#include <cstdlib> 
using namespace std; 

int main() { 
	
	// Number definitions 
	short s = 2; 
	int i = -100; 
	long l = 20000; 
	float f = 23.76; 
	double d = 340.5; 

	// Mathematical operations
	cout << "sin(d) : " << sin(d) << endl; 
	cout << "abs(i) : " << abs(i) << endl;
	cout << "floor(d) : " << floor(d) << endl; 
	cout << "sqrt(f) : " << sqrt(f) << endl; 
	cout << "pow(d, 2) : " << pow(d, 2) << endl; 

	// To use all of these math functions you must put "#include <cmath>" @ the beginning of your program
	// Otherwise it will not work. There are numerous (pun intended) math functions that can be used in c++
	// Including cos(double), sin(double), tan(double), log(double), pow(double, double), hypot(double, double)
	// the hypotnuse of a triangle), and more... 


	// For this next part we will be going into random numbers. To do this we need put "#include <cstdlib>" at the beginning of the program
	
	int a, b; 
	// set a seed
	srand( (unsigned)time( NULL ) ); 

	// now generate 10 random numbers. 
	for (a = 0; a < 10; a++) { 
		b = rand(); 
		cout << "Random number : " << b << endl; 
	} 

	return 0; 
}
