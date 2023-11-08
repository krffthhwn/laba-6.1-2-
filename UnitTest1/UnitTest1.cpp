#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1(2)/laba6.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB61rec
{
	TEST_CLASS(UnitTest1LAB61rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int s[] = { 1, 2, 3, 4, 5 };
			int result = Number(s, 5, 0, 0);
			Assert::AreEqual(3, result);
		}
	};
}

