#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3iter/6.3iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63iter
{
	TEST_CLASS(UnitTest63iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 3;
			int a[k] = { 3,1,2 };
			t = Perev1(a, k);
			Assert::AreEqual(t, 0);
		}
	};
}
