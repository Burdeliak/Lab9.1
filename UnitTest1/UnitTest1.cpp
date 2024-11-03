#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.1/main.cpp"

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define EXPR1(x, z) (MIN(x, z) * MAX((x + z), (x * z)))
#define EXPR2(x, z) (SQR(MAX(ABS(x - z), z)))

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 3;
			double z = 7;
			double expected_w = MIN(x, z) * MAX((x + z), (x * z));
			double actual_w = EXPR1(x, z);

		}
	};
}
