#include <iostream>
using namespace std; 

int main() { 

	char name[50]; 
	char age[3]; 

	cout << "Please enter your name: "; 
	
	// This is how to get input from the user
	cin >> name; 
	cout << "Your name is: " << name << endl; 

	cout << "Please enter your age: "; 
	cin >> age; 
	cout << "Your age is: " << age << endl; 
	
	char str[] = "This is an error"; 

	cerr << "Error message: " << str << endl; 
        	
} 
