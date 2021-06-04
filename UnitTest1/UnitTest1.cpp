#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    
    TEST_CLASS(UnitTest1)
	{
        TEST_METHOD(TestMethod1)
          {
              float t1 = TaylorFunc(0.0, 5);
              Assert::AreEqual<float>(0, t1);     
          };
	};
}
