#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			a = 5;
			b = 10;
			n = 1000;
			Assert::AreEqual(0.358, round(reshenie(a, b, n) * 1000) / 1000);
		}
		TEST_METHOD(TestMethod2)
		{
			a = 6;
			b = 11;
			n = 1000;
			Assert::AreEqual(0.291, round(reshenie(a, b, n) * 1000) / 1000);
		}
		TEST_METHOD(TestMethod3)
		{
			a = 7;
			b = 12;
			n = 1000;
			Assert::AreEqual(0.245, round(reshenie(a, b, n) * 1000) / 1000);
		}
	};
}