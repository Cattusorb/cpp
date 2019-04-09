#include <iostream> 
using namespace std; 

int main () { 
	int a = 10, b = 4;

	int ret = (a > b) ? a : b; 
	cout << sizeof(a) << "\n"; 
	cout << ret << "\n"; 
	cout << &a << endl;  

	return 0; 
} 
