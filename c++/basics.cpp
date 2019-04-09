#include <iostream> 
using namespace std; 

#include <iomanip> 
using std::setw; 

// Here we are going to work with a little bit of typedefs
// typedefs allow you to call a type by a different name, 
// in this case we are calling "int" by "feet" 
typedef int feet;  

#define LENGTH 10 
#define WIDTH 3
#define NEWLINE '\n'
int main() 
{
	// Here we are going to use the distance variable that we made
	feet distance = 5; 
	cout << "the distance is : " << distance << endl; 

	int area; 
	area = LENGTH * WIDTH; 
	cout << area; 
	cout << NEWLINE; 
	// This is a comment
	/* 
	 * This is a comment block
	 */

	// Prints out Hello World 
	cout << "Hello World" << endl;
	/* 
	 * There are many functions that use the escape character to do certain 
	 * things, some of which include, but are not limited to: \a alert, \b
	 * backspace, \n newline, \t horizontal tab...
	 */

	// Declaring Arrays, Initializing Arrays and Accessing Array Elements
	int size[5] = {2, 3, 5, 6, 8}; // If you specify the size of it the array can be no more than 5 elements, but if you just do [] it is not specified how long it can be

	cout << "Element" << setw(13) << "Value" << endl;

	for(int i = 0; i < 5; i++) { 
		cout << setw( 7 )<< i << setw( 13 ) << size[i] << endl; 
	} // setw() is to set the width, better for the formatted output of this
	
	// There are many ways to use arrays, you can have multidimensional arrays, pointers to arrays, you can pass arrays to functions and return arrays from functions

	// There are no strings in c++ or c, but to make a string you can use a char array
	char word[6] = {'h', 'e', 'l', 'l', 'o'}; // this same thing can be easier represented below
	char wordGood[] = "hello"; 

	cout << "word: " << word << endl; 
	cout << "wordGood: " << wordGood << endl; 
	
	// Just like in c there are ways to manipulate strings(char arrays) in c++ and they are the almost exact functions as in c
	// strcpy(string1, string2) copies string 2 into string 1
	// strcat(string1, string2) concatenates string 2 to string 1
	// strlen(string1) gives the length of string 1
	// strcmp(string1, string2) compares the two strings and returns 0 if they are the same, less than 0 if string 1 is less than string 2 and greater if otherwise
	// strchr(stringa, character) returns a pointer to the first occurrence of the character in string 1
	// strstr(string1, string2) same as previous except a string in string 1
	
	// There is a string class in c++ which is "#include <string>" 
	// From that you can do "string str1 = "hello"; " and more, this is helpful if you are more use to java, or you don't want to deal with chars and you want to 
	// have those nice strings available. 

        return 0;        
}

