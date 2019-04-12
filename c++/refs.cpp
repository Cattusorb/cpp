#include <iostream> 
using namespace std; 

int main() { 
	// Declaration of Variables
	int a; double b; 

	// Then declare reference variables
	int& aRef = a; 
	double& bRef = b; 

	a = 4; b = 2.3;  

	// Print the values of the variables and the references
	cout << "The Value of a is: " << a << endl; 
        cout << "The Value of a reference is: " << aRef << endl;
	cout << "The Value of b is: " << b << endl; 
	cout << "The Value of b reference is: " << bRef << endl; 

	// Normally, references to variables are used for function arguments (parameters) and 
	// function return values. 
	return 0; 
} 
