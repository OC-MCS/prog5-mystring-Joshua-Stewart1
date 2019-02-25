//=====================================================
// Joshua Stewart
// 2/13/19
// Programming Assignment #5
// Description: My String
//=====================================================

// test driver code goes here
#include "MyString.h"
#include <iostream>
using namespace std;

//Overloaded << operator: establishes how a MyString object is output
// parameters: 
//  myStream: the stream of output to release
//  str: the MyString object to return values from
// return type: ostream
ostream& operator<< (ostream& myStream, const MyString& myString)
{
	myStream << myString.c_str();
	return myStream;
}

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
		cout << "s5 == s4" << endl << endl;
	}

	return 0;
}