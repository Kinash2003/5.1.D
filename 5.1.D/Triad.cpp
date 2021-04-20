//Triad.cpp
#include "Triad.h"


void Triad::SetFirst(long first) { this->first = first; }
void Triad::SetSecond(long second) { this->second = second; }


double Triad::GetFirst() const { return first; }
double Triad::GetSecond() const { return second; }


Triad::Triad() { SetFirst(0); SetSecond(0); }
Triad::Triad(long first = 0, long second = 0)throw(invalid_argument, bad_exception, Bad_exception, const char*)
{
	if (first == 1 && second == 1 )
		throw invalid_argument("Invalid_argument");
	else if (first == 2 && second == 2 )
		throw bad_exception();
	else if (first == 3 && second == 3 )
		throw Bad_exception("MyException");
	else if (first == 4 && second == 4)
		throw "Exception";
	SetFirst(first); SetSecond(second);
}
Triad::Triad(Triad& A)
{
	SetFirst(A.GetFirst());
	SetSecond(A.GetSecond());
}

bool operator > (Triad& A, Triad& B)
{
	return ((A.GetFirst() > B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() > B.GetSecond()));
}
bool operator < (Triad& A, Triad& B)
{
	return ((A.GetFirst() < B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() < B.GetSecond()));
}
bool operator == (Triad& A, Triad& B)
{
	return (A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond());
}

Triad::operator string() const
{
	stringstream ss;
	ss << " Старша частина: " << first << endl;
	ss << " Mолодша частина: " << second << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Triad& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triad& A)
{
	double first, second, third;
	cout << " Cтаршу частину = "; in >> first;
	cout << " Mолодшу частину  = "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}
