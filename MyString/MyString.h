#pragma once
// MyString class declaration goes here

#include <iostream>
using namespace std;

class MyString
{
private:
	char* str;
	void newString(char* newString);
public:
	MyString();
	MyString(char* myString);
	MyString(const MyString &other);
	~MyString();
	MyString operator=(const MyString &other);
	MyString operator+(const MyString &other);
	bool operator==(const MyString &other);
	char* c_str() const;
};

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