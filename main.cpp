//This program focuses on basic operations between fractions
//Programmer: Badtothebunny
#include <iostream>
#include <cstdlib> //For RNG
#include <ctime>
#include "Fraction.h"//Including the fraction class I wrote
using namespace std;
int main(int argc, char** argv)
{
	char operation; //This is for when the user inputs an operation.
	Fraction first;
	Fraction answer; //Two Fraction type objects.
	srand(static_cast<unsigned int>(time(0)));//initializing randomizer
	cout<<"Welcome :)"<<endl; //Always greet the user :)
//This while loop is so the user can choose when to end the program
	while (operation != 'e')
	{
//Randomly choosing numbers from 1 to 15
		first.setNumerator(rand()%15+1);
		first.setDenominator(rand()%15+1);
		answer.setNumerator(rand()%15+1);
		answer.setDenominator(rand()%15+1);
		cout<<"Numbers are: "<<endl;
		first.print();
		answer.print();
//The following is the menu for the user to select an operation.
	cout<<"Choose an operation:"<<endl<<"Addition (+)"<<endl
	<<"Subtraction (-)"<<endl<<"Multiplication (*)"
	<<endl<<"Division (/)"<<endl<<"Enter 'e' to exit program"<<endl;
	cin>>operation;
	switch (operation) //Using switch here to determine what operation to do
		{
			case '+':
				answer = first + answer;
				cout<<"Sum: "<<endl;
				break;
			case '-':
				answer = first - answer;
				cout<<"Difference: "<<endl;
				break;
			case '*':
				answer = first * answer;
				cout<<"Product: "<<endl;
				break;
			case '/':
				answer = first / answer;
				cout<<"Difference: "<<endl;
				break;
			default:
				cout<<"Thank you for using my program."<<endl;
				return 0; //Ends program.
		}
	answer.simplify();
	answer.print();
	}
}

