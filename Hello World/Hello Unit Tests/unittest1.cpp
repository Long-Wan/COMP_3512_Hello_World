#include "../Hello World/lab1.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace HelloUnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestGcd1)
		{
			const int a = 1;
			const int b = 2;
			int result = gcd(a, b);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestGcd2)
		{
			const int a = 8;
			const int b = 24;
			int result = gcd(a, b);
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(TestGcd3)
		{
			const int a = 42;
			const int b = 24;
			int result = gcd(a, b);
			Assert::AreEqual(6, result);
		}

		TEST_METHOD(TestFibonacci1)
		{

			int result = fibonacci(3);
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(TestFibonacci2)
		{
			int result = fibonacci(4);
			Assert::AreEqual(3, result);
		}
	};
}