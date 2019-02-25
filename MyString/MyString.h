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