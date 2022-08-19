#include "pch.h"
#include "CppUnitTest.h"
#include "../bubblesort/bubblesort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(BubbleSort_positive)
		{
			BubbleSort sort;
			const unsigned int size = 5;
			int Array[size] = { 20, 1, 23, 78, 498 };
			int SortedArray[size] = {1, 20, 23, 78, 498};
			sort.bubblesort(Array, size);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(SortedArray[i], Array[i]);
			}
		}
	};

	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(BubbleSort_negative)
		{
			BubbleSort sort;
			const unsigned int size = 5;
			int Array[] = {-23, -78, -1, -20, -498};
			int finArray[] = { -498, -78, -23, -20, -1};
			sort.bubblesort(Array, size);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(finArray[i], Array[i]);
			}
		}
	};
	
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(BubbleSort_equal)
		{
			BubbleSort sort;
			const unsigned int size = 5;
			int Array[size] = {0, 0, 0, 0, 0};
			int finArray[size] = {0, 0, 0, 0, 0};
			sort.bubblesort(Array, size);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(finArray[i], Array[i]);
			}
		};
	};

	TEST_CLASS(UnitTest6)
	{
	public:

		TEST_METHOD(BubbleSort_mixed)
		{
			BubbleSort sort;
			const unsigned int size = 5;
			int Array[size] = { -20, -1, 23, 78, -498 };
			int SortedArray[size] = { -498, -20, -1, 23, 78 };
			sort.bubblesort(Array, size);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(SortedArray[i], Array[i]);
			}
		}

	};

	TEST_CLASS(UnitTest7)
	{
	public:

		TEST_METHOD(BubbleSort_twins)
		{
			BubbleSort sort;
			const unsigned int size = 5;
			int Array[] = { 20, 78, 1, 20, 498 };
			int finArray[] = { 1, 20, 20, 78, 498 };
			sort.bubblesort(Array, size);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(finArray[i], Array[i]);
			}
		}
	};
}
