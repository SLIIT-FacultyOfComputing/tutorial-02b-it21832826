/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
long factorial(int no);
long nCr(int n, int r);

int main() {
 int n, r;
 std::cout << "Enter a value for n ";
 std::cin >> n;
 std::cout << "Enter a value for r ";
 std::cin >> r;
 std::cout << "nCr = ";
 std::cout << nCr(n,r);
 std::cout << std::endl;
}

long factorial(int no){
	long f = 1;
	int i;
	for (i = no; i >= 1; i--){
		f = f * i;
	}

	return f;
}

long nCr(int n, int r){
	long nNo;
	long rNo;
	int sub;
	long nCR;
  long subF;
	nNo = factorial (n);
	rNo = factorial (r);
	sub = n - r;
  	subF = factorial (sub);
	nCR = (nNo / (rNo * subF));
	
	return nCR;
}

	return f;
}

long nCr(int n, int r){
	int nNo;
	int rNo;
	int sub;
	int nCR;
	nNo = factorial (n);
	rNo = factorial (r);
	sub = nNo - rNo;
	nCR = nNo / (rNo * sub);
	
	return nCR;
}

