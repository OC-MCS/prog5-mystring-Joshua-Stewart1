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
	MyString operator==(const MyString &other);
	const char* c_str();
};

//Overloaded << operator
//Establishes how a MyString object is output
ostream& operator<<(ostream& myStream, MyString& str)
{
	myStream << str.c_str();
	return myStream;
}