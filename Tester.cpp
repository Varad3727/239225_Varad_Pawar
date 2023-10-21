#include<iostream>
#include "student.h"
using namespace std;

int main(int argc, char** argv) {

	string name;
	cout<<"Enter the name of the student: ";
	getline(cin,name);
	cout<<"Enter the id of the student: ";
	int id;
	cin>>id;
	student *s1 = new student(id,name);
	
	cout<<"Enter the marks of student in subject 1: ";
	double marks1;
	cin>>marks1;
	
	cout<<"Enter the marks of student in subject 2: ";
	double marks2;
	cin>>marks2;
	
	cout<<"Enter the marks of student in subject 3: ";
	double marks3;
	cin>>marks3;
	
	s1->setmarks1(marks1);
	s1->setmarks2(marks2);
	s1->setmarks3(marks3);

	cout<<"The total marks obtained by student"<<s1->getname()<<"is: "<<s1->totalMarks()<<endl;
	cout<<"The percentage obtained by student"<<s1->getname()<<"is: "<<s1->percentage()<<endl;
	return 0;
}
