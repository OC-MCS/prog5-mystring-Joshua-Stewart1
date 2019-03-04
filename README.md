# prog5-mystring-Joshua-Stewart1
prog5-mystring-Joshua-Stewart1 created by GitHub Classroom  

On operator<<, need to make sure that c_str() returns a const pointer, since the parameter is a const MyString  
Most of your functions will crash if passed a MyString that was constructed with the default constructor
Test driver needs to test end-to-end the same way that client code would use it. For example,  
need to test s1 = s2 + s3 to test that overloaded = works with the MyString returned by +, not just cout << s2 + s3  

Grade: 36/40
