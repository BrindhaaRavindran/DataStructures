#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int array[], int SizeOfArray)
{
	sort(array, array + SizeOfArray);

	int max_count = 1, res = array[0], curr_count = 1;
	for (int i = 1; i < SizeOfArray; i++) 
	{
		if (array[i] == array[i - 1])
			curr_count++;
		else 
		{
			if (curr_count > max_count) 
			{
				max_count = curr_count;
				res = array[i - 1];
			}
			curr_count = 1;
		}
	}

	if (curr_count > max_count)
	{
		max_count = curr_count;
		res = array[SizeOfArray - 1];
	}

	return res;
}

int main()
{
	int array[100];
	int SizeOfArray;
	cout<<"Enter Size Of Array\n";
	cin>>SizeOfArray;
	cout<<"Enter integers:\n";
	for(int i=0;i<SizeOfArray;i++)
	{
	    cin>>array[i];
	}
	cout<<"Most Frequent Element:\n";
	cout << mostFrequent(array, SizeOfArray);
	return 0;
}
