///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded functions

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
friend bool operator > (const Fraction &obj1, const Fraction &obj2);
  friend  Fraction add(int, Fraction);
	friend	 Fraction add(Fraction, int);
};
Fraction add(int number, Fraction a){
	
	a.num = number * a.denom + a.num;
	return a;
}
Fraction add(Fraction b, int number1){
	b.num = number1 * b.denom + b.num;
	return b;
}

bool operator > (const Fraction &obj1, const Fraction &obj2){
	double left = static_cast<double>(obj1.num) / obj1.denom;
}
