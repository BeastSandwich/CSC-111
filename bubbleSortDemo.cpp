#include <iostream>
using namespace std;

void swap (int &a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size)
{
	int maxElement;
	int index;
	
	for  (maxElement = size-1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (arr[index] > arr[index+1])
			{
				swap(arr[index],arr[index+1]);
			}
		}
	}
}

int binarySearch(int arr[], int size, int value)
{
	int first = 0,
		last  = size - 1,
		middle,
		pos   = 1;
		
	bool found = false;
	
	while (!found && first <= last)
	{
		middle = (first+last)/2;
		if (arr[middle]==value)
		{
			found = true;
			pos = middle;
		}
		else if (arr[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return pos;
}

int main()
{
	int size;
	int value;
	
	cout << "How many numbers will you list?" << endl;
	cin >> size;
	
	int arr[size];
	
	cout << "List the numbers you want on the list." << endl;
    for(int i= 0; i < size; i++)
       {cin >> arr[i];}
    	
	cout << "What number are you trying to get?" << endl;
	cin >> value;
	
	bubbleSort(arr,size);
	
	int position = binarySearch(arr,size,value);
	
	if (position > -1)
	{
		cout << "Your number, " <<value << ", was located at " <<position << ".";
	}
	else
	{
		cout << value << " was not found.";
	}
	
	return 0;
}