#include <iostream> 
using namespace std;

int main() { 
	int var = 10; // This is the actual variable
	int *ip; // This is a pointer to an integer variable

	ip = &var; // This stores the address of the variable into the pointer

	// Now we can print out the variable with the actual variable
	// and then we can print out the address stored in the pointer, 
	// and then we can print out the variable of the pointers address stored.
		
	cout << "Value of var variable is: " << var << endl; 
	cout << "Address stored in ip variable is: " << ip << endl; 
	cout << "Value of *ip variable: " << *ip << endl; 

	return 0;
       /*
	* There are lots of pointers that are allowed in c++. 
	* There are NULL pointers, pointer arithmetic (++, --, +, -), 
	* pointers to pointers to pointers..., passing pointers to functions, and
	* returning them from functions. This can be seen in a lab for Computer Organization
	* that I did in Computer Organization for lab678.
	*/	
} 
