#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void printContents(vector<T> & vec, string const & mes);
bool sortDescending(int i, int j);

int main(int argc, char **argv)
{
	const int arrLen = 20;
	svector<int> intVector;

	//fill vector
	for (int i = 0; i < arrLen; i++)
	{
		intVector.push_back(i);
	}

	printContents<int>(intVector, "Vector Contents");

	random_shuffle(intVector.begin(), intVector.end());
	printContents<int>(intVector, "Random Shuffle Vector Contents");

	sort(intVector.begin(), intVector.end(), sortDescending);
	printContents<int>(intVector, "Sorted Vector Contents");

	return 0;
}

template <typename T>
void printContents(vector<T> & vec, string const & mes)
{
	cout << mes << endl;
	for (std::vector<T>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	cout << endl;
}

bool sortDescending(int i, int j)
{
	return i > j;
}
