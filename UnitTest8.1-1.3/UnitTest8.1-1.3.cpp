#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1-1(char).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8113
{
	TEST_CLASS(UnitTest8113)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "jjkjnjSQV";

			int t = Include(s);

			Assert::AreEqual(t, 1);
		}
	};
}
