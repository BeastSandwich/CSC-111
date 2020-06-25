#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int value)
{
	bool found = false;
	int pos = -1;
	int index = 0;
	
	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			pos = index;
		}
		index++;
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
	
	int position = linearSearch(arr,size,value);
	
	
	if (position > -1)
	{
	    position++;
		cout << "Your number, " <<value << ", was located at " <<position << ".";
	}
	else
	{
		cout << value << " was not found.";
	}
	
	return 0;
}