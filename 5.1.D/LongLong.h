//LongLong.h
#pragma once
#include "Triad.h"

class LongLong :public Triad
{

public:
	LongLong();
	LongLong(long, long);
	LongLong(LongLong&);

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);

};

