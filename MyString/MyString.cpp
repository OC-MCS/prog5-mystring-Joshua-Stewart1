// MyString implementation file
#include <iostream>
using namespace std;
#include "MyString.h"

//Default Constructor
//Initializes a default version of a MyString
MyString::MyString()
{
	str = nullptr;
}

//Constructor
//Initializes a version of a MyString with a
//pointer to a copy of a string myString
MyString::MyString(char* myString)
{
	newString(myString);
}

//Copy Constructor
//Initializes a version of a MyString with a
//copy of another MyString object
MyString::MyString(const MyString& other)
{
	newString(other.str);
}

//Destructor
//Runs when a MyString object is being deleted
MyString::~MyString()
{
	delete[] str;
}

// newString: copy a given string into the object
// parameters: 
//  newString: The string to copy into the object
// return type: void
void MyString::newString(char* newString)
{
	int stringLength = strlen(newString) + 1;
	str = new char[stringLength];
	strcpy_s(str, stringLength, newString);
}

