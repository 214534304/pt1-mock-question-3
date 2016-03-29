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
	friend Fraction operator > (const Fraction &obj1, const Fraction &obj2);          //  overload the greater than operator and giving it access to the class members 
	friend  Fraction add(int, Fraction);
	friend  Fraction add(Fraction, int);
private:
	int num;				// numerator;
	int denom;				// denominator;
	int number1;
public:
	Fraction(int n, int d) : num(n), denom(d) { };

	~Fraction(){
	}
	void print() { cout << num << "/" << denom; };
	//friend void set(int, Fraction);
	
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




int main(){
	Fraction fraction1(6, 2);
	
	int number;

	cout << "" << endl;

	cout << "The greater fraction is:" << endl;

    cout << "Enter an integer:" << endl;
	cin >> number;

	Fraction f = add(number, fraction1);
	f.print();
	cout << endl << endl;

	fraction1 = add(f, number);
	fraction1.print();
	cout << endl;
	

	

	return 0;
}