#include <iostream> 
int count; 
extern void write_extern(); 

// To compile a program like this with an external storage class or external files you need to do this: 
// g++ main.cpp support.cpp -o write
// the word "write" can be anything, it doesn't have to be write, it shoud pretain to the program you are writing

main() { 
	count = 5; 
	write_extern(); 
}

