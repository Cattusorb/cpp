#include <iostream> 

// Function Declaration Area
void func(void); 

static int count = 10; // This is a global variable in c++

int main() { 
	
	while(count--) {
	       func(); 	
	} 

	return 0; 
}

// Fuction Definition Area
void func(void) { 
	static int i = 5; // This is a local static variable in c++
	i++; 
	std::cout << "i is " << i; 
	std::cout << " and count is " << count << std::endl;
} 	
