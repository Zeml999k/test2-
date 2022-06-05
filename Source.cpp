#include <iostream>
#include <ctime>
#include<random>
//Declare an array of integers of 100 elements.
//Initialize an array with random values from 0 to 500.
//Using objects of the "adder" class to calculate the sum of elements in each hundred:
// 1-100, 101-200, 201-300, 301-400, 401-500
class accumulate
{
private:
	int one = 0, two = 0, three = 0, four = 0, five = 0;
public:
	accumulate() {}
	int raNDD(const int size, int* arr)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 500;
		}
		return *arr;
	}
	void score(const int size, int* arr)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] >= 1 && arr[i] <= 100) one += arr[i];
			if (arr[i] >= 101 && arr[i] <= 200) two += arr[i];
			if (arr[i] >= 201 && arr[i] <= 300) three += arr[i];
			if (arr[i] >= 301 && arr[i] <= 400) four += arr[i];
			if (arr[i] >= 401 && arr[i] <= 500) five += arr[i];
		}
	}
	int GetOne()
	{
		return  one;
	}
	int Gettwo()
	{
		return  two;
	}
	int Getthree()
	{
		return  three;
	}
	int Getfour()
	{
		return  four;
	}
	int Getfive()
	{
		return  five;
	}
};

int main()
{
	accumulate N;
	const int size = 100;
	int arr[size]{};
	N.raNDD(size, arr);
	N.score(size, arr);
	std::cout << "Scope 1 - 101=\t\t" << N.GetOne() << "\nScope 101 - 200=\t" << N.Gettwo() <<
		"\nScope 201 - 300=\t" << N.Getthree() << "\nScope 301 - 400=\t" << N.Getfour() <<
		"\nScope 401 - 500=\t" << N.Getfive();
}