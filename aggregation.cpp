#include <iostream>
using namespace std;
 
class Student
{
public:  
string Name;  
float ID;
Student(string Name, float ID) 	 
{    
this-> Name = Name;    
this-> ID = ID;   
}
};
class Details   
{    
private:  
Student* std;  
public:  
int stdclass;    
string section;    
Details(int stdclass, string section, Student* std)    
{    
this->stdclass = stdclass;    
this->section = section;    
this->std = std;    
}    
 
void detail()
{
cout << "Student Class : " << stdclass << endl;
cout << "Student Section : " << section << endl;
cout << "Student Name : " << std->Name<< endl;
cout << "Student ID : "<< std->ID << endl;  
}
};
int main()
{
Student s1 = Student("abrar ahmed", 1);    
Details d1 = Details(6, "A", &s1);  
d1.detail(); 	 
return 0;
}