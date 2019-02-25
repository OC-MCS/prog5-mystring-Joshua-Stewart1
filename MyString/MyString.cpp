// MyString implementation file
#include <iostream>
using namespace std;
#include "MyString.h"

//Default Constructor
//Initializes a default version of a MyString
MyString::MyString()
{
	cout << "Creating Default MyString..." << endl;
	str = nullptr;
}

//Constructor
//Initializes a version of a MyString with a
//pointer to a copy of a string myString
MyString::MyString(char* myString)
{
	cout << "Creating MyString..." << endl;
	newString(myString);
}

//Copy Constructor
//Initializes a version of a MyString with a
//copy of another MyString object
MyString::MyString(const MyString& other)
{
	cout << "Creating Copy MyString..." << endl;
	newString(other.str);
}

//Destructor
//Runs when a MyString object is being deleted
MyString::~MyString()
{
	cout << "Calling Destructor..." << endl;
	delete[] str;
}

// newString: copy a given string into the object
// parameters: 
//  newString: the string to copy into the object
// return type: void
void MyString::newString(char* newString)
{
	int stringLength = strlen(newString) + 1; //The size of the string
	str = new char[stringLength];
	strcpy_s(str, stringLength, newString);
}

//Overloaded = operator: Establishes how a MyString object is assigned
// parameters: 
//  other: the string to copy into the object
// return type: MyString
MyString MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		delete[] str;
		newString(other.str);
	}
	return *this;
}

//Overloaded + operator: establishes how MyString objects are added together
// parameters: 
//  other: the MyString to combine with the object
// return type: MyString
MyString MyString::operator+(const MyString& other)
{
	int stringSize = strlen(str) + strlen(other.str) + 1; //Size of the concatenated string
	MyString returnString = new char[stringSize]; //String object to be returned
	strcpy_s(returnString.str, stringSize, str);
	strcat_s(returnString.str, stringSize, other.str);

	return returnString;
}

//Overloaded == operator: establishes how MyString objects are compared
// parameters: 
//  other: the MyString to compare with the object
// return type: bool
bool MyString::operator==(const MyString& other)
{
	return strcmp(str, other.str);
}

// c_str: get the value of the objects c-string
// parameters: none
// return type: char*
char* MyString::c_str() const
{
	return str;
}