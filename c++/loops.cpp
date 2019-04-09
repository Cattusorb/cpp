#include <iostream> 
using namespace std; 

// There are 4 different types of loops
// While Loop, For Loop, Do While Loop, Nested Loop

// And there are different wants to control the loops as well
// a break statement "break;" terminates the loop or switch statement
// a continue statement skips the remainder of the body of the loop and retests the condition
// a goto statement transfers control to a labeled statement (this is not recommended, danderous) 

/*
 * If you wanted to make an infinite loop it would look like this
 * for ( ; ; ) { 
 * 	printf("This loop will run forever. \n"); 
 * } 
 *
 * To terminate this loop just press ctrl + c
 */

// There are also decision making statements
// Ex: if, else if, switch, nested if, nested switch

// There is also an operater ?: which works something like 
// Expression1 ? Expression2 : Expression3; 

int main() { 

	int i = 0; 

	while (i < 10) { 
		cout << "i is " << i << "\n"; 

		for (int a = 0; a < 10; a++) {
		       if (a == 2 && i == 2) { 
		       		cout << "a is " << a << " and i am in an if statement \n"; 
		       }
		       if (a > 5 || i < 5) { 
				cout << "a is " << a << " and i am in an else if statement \n";
			  	switch(a) { 
					case 7: 
						cout << "a is " << a << " and i am in the switch \n"; 
						break; 
					default: 
						cout << "something default\n";	
				} 	
		       } 
		} 

		i++; 
	}
	return 0; 
} 

