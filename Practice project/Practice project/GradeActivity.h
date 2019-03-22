#pragma once
#include<iostream>
using namespace std;
class GradeActivity
{
protected:
	char letter;
	double score;
	void Determinegrade();
public:
	GradeActivity()
	{
		letter = ' ';
		score = 0.0;
	}


};
