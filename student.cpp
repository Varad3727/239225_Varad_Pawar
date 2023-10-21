#include<iostream>
#include "student.h"
using namespace std;

student::student(int id, string name)
{
    this->id = id;
    this->name = name;
}

float student::totalMarks(){
	return marks1 + marks2 + marks3;			
}

float student::percentage(){
	return (marks1 + marks2 + marks3)/3;			
}

string student::getname(){
    return name;
}

int student::getid(){
    return id;
}

void student::setname(string name){
    this->name = name;
}

void student::setid(int id){
    this->id = id;
}

void student::setmarks1(double marks1){
    this->marks1 = marks1;
}

void student::setmarks2(double marks2){
    this->marks2 = marks2;
}

void student::setmarks3(double marks3){
    this->marks3 = marks3;
}

void student::setmarks(double marks1, double marks2, double marks3){
    setmarks1(marks1);
    setmarks2(marks2);
    setmarks3(marks3);
}

double student::getmarks1(){
    return marks1;
}
double student::getmarks2(){
    return marks2;
}
double student::getmarks3(){
    return marks3;
}






































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
