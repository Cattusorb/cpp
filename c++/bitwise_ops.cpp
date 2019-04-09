#include <iostream>

int main() { 
	
	int  A = 60, B = 13; 
	/* 
	 * There are 6 Bitwise operators that are very important 
	 * >> Right Shift
	 * << Left Shift
	 * ~ Complement "flipping bits" 
	 * ^ Copies the bit if it is set in one operand but not both
	 * | OR, copes a bit if it exists in either operand
	 * & AND, copies a bit if it is in both operands
	 */
	
	int andOp = A&B; 
	int orOp = A|B; 
	int xorOp = A^B; 
	int comp = ~A;

	std::cout << "A: " << A << " B: " << B << std::endl; 
	std::cout << "A&B: " << andOp; 
	std::cout << " A|B: " << orOp;
        std::cout << " A^B: " << xorOp; 
        std::cout << " ~A: " << comp << std::endl; 

	return 0; 
} 
