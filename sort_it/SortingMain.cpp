#include "SortingMain.h"
#include <stdlib.h>
#include "BubbleSort.h"
#include "QuickSort.h"

using namespace std;

int SortingMain::Run()
{
	// Create the data
	int arr[] = { 29, 10, 14, 37, 14 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	// Show Menu
	system("CLS");
	cout << endl;
	cout << "Pick a ort method: " << endl;
	cout << "1) Bubble sort" << endl;
	cout << "2) Quick sort" << endl;
 
	// Process Selection
	int nSelection = 0;
	cin >> nSelection;
	switch (nSelection)
	{
	case 1:
		pSortBase = new BubbleSort();
		break;

	case 2:
		pSortBase = new QuickSort();
		break;
	default:
		cout << "Bad Input, goodbye" << endl;
		return 0;
	}

	// Fill the vector with the results
	for (int i = 0; i < arrSize; i++)
		pSortBase->addItem(arr[i]);

	// Show the results to the user
	cout << "Before Sort: ";
	pSortBase->printVector();

	// Sort it
	cout << "************* Sorting ************" << endl;
	pSortBase->sort();


	cout << "After Sort: ";
	pSortBase->printVector();

	return 0;
}
