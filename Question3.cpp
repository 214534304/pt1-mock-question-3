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

	Fraction() : num(0), denom(0)
	{
	}
	~Fraction(){
	}
	void print() { cout << num << "/" << denom; };

	friend Fraction operator > (const Fraction &obj1, const Fraction &obj2);          //  overload the greater than operator and giving it access to the class members 

	//overloading two functions called add to take two arguments

  friend  Fraction add(int, Fraction);

	friend	 Fraction add(Fraction, int);
};
Fraction add(int number, Fraction a){
	
	a.num = number * a.denom + a.num;
	a.denom = a.denom * 1;
	return a;
}
Fraction add(Fraction b, int number){
	
	b.num = number * b.denom + b.num;
	b.denom = b.denom * 1;
	return b;
}

Fraction operator>(const Fraction&obj1, const Fraction& obj2){


	if (obj1.num / obj1.denom > obj2.num / obj2.denom){
		return obj1;
	}
	else{
		return obj2;
	}

}