//Triad.h
#pragma once
#include <iostream>
#include <sstream>
#include "Bad_exception.h"
using namespace std;

class Triad
{
private:
	double first, second;
public:
	void SetFirst(long);
	void SetSecond(long);


	double GetFirst() const;
	double GetSecond() const;


	Triad();
	Triad(long, long)throw(invalid_argument, bad_exception, Bad_exception, const char*);
	Triad(Triad&);

	friend bool operator > (Triad&, Triad&);
	friend bool operator < (Triad&, Triad&);
	friend bool operator == (Triad&, Triad&);

	operator string() const;
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
};

