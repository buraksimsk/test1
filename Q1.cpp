#include <iostream>

int main() {
	
	std:: cout << "\n Title - Math with int variables";
	
	int a = 5, b = 11;
	float x;
	
	x = static_cast<double>(b) / a ;
	
	std:: cout << "\n Equation 1= " << (a+b) / 2;
	std:: cout << "\n\n\t Equation 2 = " << b+a * 2;
	std:: cout << "\n\n\t\t Equation 3= " << a - b / 2.0;
	std:: cout << "\n\t\t x= " <<x;
	
	std:: cout << "\n\n";
	return 0;
}


