#include<iostream>
#include<string>

using namespace std;

template  <class T> // generic template
T getMinArray(T arr[], int size)
{
	int i;
	T min = arr[0];
	for (int i = 0; i < size; i++) 
	{
		if (min > arr[i])

			min = arr[i];
		else
			min = min;
	}
	return min;
}



int main() {
	 
	int intArray[] = { 2, 3, 4, 5, 6, 8 };

	cout << "Min integer value in this array {2, 3, 4, 5, 6, 8}" << endl;
	cout << getMinArray<int>(intArray, 6) << endl;




	return 0;
}