#include<iostream>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class student
{
	int id;
	string name;
	double marks1;
	double marks2;
	double marks3;
	public:
		student(int id, string name);
		string getname();
		int getid();
		float totalMarks();
		float percentage();		
		void setname(string name);
		void setid(int id);
		void setmarks1(double marks1);
		void setmarks2(double marks2);
		void setmarks3(double marks3);
		void setmarks(double marks1, double marks2, double marks3);
		double getmarks1();
		double getmarks2();
		double getmarks3();
	protected:
};

#endif
