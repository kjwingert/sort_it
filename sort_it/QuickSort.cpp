#include "QuickSort.h"

using namespace std;

void QuickSort::sort() {
	quickSort(0, _mainVector.size() - 1);
}
	// organize the rightItems and the leftItems
	int QuickSort::Organize(int low, int high)
	{
		int pivot = _mainVector[high]; // set pivot
		int i = (low - 1); // set the index of the smaller value

		for (int j = low; j <= high - 1; j++) // increment through the array values
		{
			if (_mainVector[j] < pivot)   // check to see if the right item is less than the pivot
			{
				i++;
				swap(i, j);  // swap the left item with the right item. 
			}
		}
		swap(i + 1, high);
		return (i + 1); 
	}
	// create the swap function
	void QuickSort::swap(int left, int right) {
		int temp = 0;
		temp = _mainVector[left];
		_mainVector[left ]= _mainVector[right];
		_mainVector[right] = temp;
	}
	// implement the funtion that runs the quicksort method
	void QuickSort::quickSort(int low, int high)
	{
		if (low < high)
		{
			// rename pivot index
			int piv = Organize(low, high);

			// separate both sides of the pivot to sort them
			quickSort(low, piv - 1);
			quickSort(piv + 1, high);
		}
	}
