#include "pch.h"
#include "CppUnitTest.h"
#include "..\ConsoleApplication5\ConsoleApplication5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(root_equation(0, 0, 0, 0, 0, 0) == "5");
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::IsTrue(root_equation(1, 2, 3, 4, 5, 6) == "2 -4.000000 4.500000");
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::IsTrue(root_equation(0, 0, 0, 1, 0, 1) == "4 1.000000");
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::IsTrue(root_equation(0, 1, 0, 0, 1, 0) == "4 1.000000");
		}

		TEST_METHOD(TestMethod5)
		{
			Assert::IsTrue(root_equation(0, 0, 1, 0, 0, 1) == "3 1.000000");
		}

		TEST_METHOD(TestMethod6)
		{
			Assert::IsTrue(root_equation(1, 0, 0, 0, 1, 0) == "3 1.000000");
		}

		TEST_METHOD(TestMethod7)
		{
			Assert::IsTrue(root_equation(1, 0, 0, 0, 1, 1) == "0");
		}

		TEST_METHOD(TestMethod8)
		{
			Assert::IsTrue(root_equation(0, 1, 0, 1, 0, 0) == "4 0.000000");
		}

		TEST_METHOD(TestMethod9)
		{
			Assert::IsTrue(root_equation(0, 1, 0, 1, 0, 0) == "4 0.000000");
		}

		TEST_METHOD(TestMethod10)
		{
			Assert::IsTrue(root_equation(1, 0, 1, 0, 0, 0) == "3 0.000000");
		}

		TEST_METHOD(TestMethod11)
		{
			Assert::IsTrue(root_equation(1, 0, 1, 0, 1, 1) == "3 1.000000");
		}

		TEST_METHOD(TestMethod12)
		{
			Assert::IsTrue(root_equation(0.5, 0, 0.5, 10, 0, 0) == "2 0.000000 0.000000");
		}

		TEST_METHOD(TestMethod13)
		{
			Assert::IsTrue(root_equation(1, 1, 2, 0, 0, 0) == "2 0.000000 0.000000");
		}

		TEST_METHOD(TestMethod14)
		{
			Assert::IsTrue(root_equation(1, 1, 2, 0, 0, 0) == "2 0.000000 0.000000");
		}

		TEST_METHOD(TestMethod15)
		{
			Assert::IsTrue(root_equation(0, 1, 1, 0, 0, 0) == "2 0.000000 0.000000");
		}

		TEST_METHOD(TestMethod16)
		{
			Assert::IsTrue(root_equation(0, 1, 1, 1, 0, 0) == "1 -1.000000 0.000000");
		}

		TEST_METHOD(TestMethod17)
		{
			Assert::IsTrue(root_equation(1, 1, 0, 1, 0, 0) == "1 -1.000000 0.000000");
		}

		TEST_METHOD(TestMethod18)
		{
			Assert::IsTrue(root_equation(1, 1, 0, 1, 0, 0) == "1 -1.000000 0.000000");
		}

		TEST_METHOD(TestMethod19)
		{
			Assert::IsTrue(root_equation(1, 1, 1, 2, 0, 0) == "2 0.000000 0.000000");
		}

		TEST_METHOD(TestMethod20)
		{
			Assert::IsTrue(root_equation(1, 1, 1, 1, 1, 1) == "1 -1.000000 1.000000");
		}

		

	};
}
