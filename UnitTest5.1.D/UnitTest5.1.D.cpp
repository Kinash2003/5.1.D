#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.D/LongLong.h"
#include "../5.1.D/LongLong.cpp"
#include "../5.1.D/Triad.h"
#include "../5.1.D/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad A(9, 9), B(8, 8);
			Assert::AreEqual(A < B, false);


		}
	};
}
