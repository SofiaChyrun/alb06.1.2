#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.1.2/ChyrunSofialab6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0612
{
	TEST_CLASS(UnitTest0612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 2;
			int a[n] = { 0,0 };
			t = Sum(a, n-1, 0);
			Assert::AreEqual(t, 0);
		}
	};
}
