#ifndef DIPLSTUDENT_H
#define DIPLSTUDENT_H
#include "Student.h"

class DiplStudent: public Student
{
	public:
		
		DiplStudent(string i, string p, int br, int index, string d): Student(i, p, br, index), datum(d){};
		
		void ispis()
		{
			Student::ispis();
			cout<<" datum "<<datum;
		}
	protected:
		
		string datum;
};

#endif