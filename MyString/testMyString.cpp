//=====================================================
// Joshua Stewart
// 2/13/19
// Programming Assignment #5
// Description: My String
//=====================================================

// test driver code goes here
#include <iostream>
using namespace std;
#include "MyString.h"


int main()
{
	char string1[17] = "This is a string";
	char string2[23] = " this is also a string";
	
	//Default Constructor
	MyString s1;
	cout << endl;

	//Regular Constructor
	MyString s2(string1);
	cout << s2 << endl << endl;

	//Copy Constructor
	MyString s3 = s2;
	cout << s3 << endl << endl;

	//Overloaded assignment
	MyString s4;
	s4 = s2;
	cout << s4 << endl << endl;

	//Overloaded +
	MyString s5(string2);
	cout << s4 + s5 << endl << endl;

	//Overloaded ==
	if (s5 == s4)
	{
		cout << "True" << endl << endl;
	}

	return 0;
}