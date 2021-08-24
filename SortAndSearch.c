#include <stdio.h>

int binarySearch(int array[], int left, int right, int searchElement)
{
	if (right >= left) 
	{
		int mid = left + (right - left) / 2;
        if (array[mid] == searchElement)
			return mid;
		if (array[mid] > searchElement)
			return binarySearch(array, left, mid - 1, searchElement);

		return binarySearch(array, mid + 1, right, searchElement);
	}

	return -1;
}

int main()
{
	int array[1000], searchElement, SizeOfArray, i, j, temp;
    printf("Enter the number of elements in an array : ");
    scanf("%d", &SizeOfArray);
    printf("Enter the numbers \n");
    for (i = 0; i < SizeOfArray; ++i)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < SizeOfArray; ++i) 
    {
        for (j = i + 1; j < SizeOfArray; ++j)
        {
            if (array[i] > array[j]) 
            {
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < SizeOfArray; ++i)
    {
        printf("%d\n", array[i]);
    }
	printf("Enter the element to be searched : ");
	scanf("%d",&searchElement);
	int result = binarySearch(array, 0, SizeOfArray - 1, searchElement);
	if(result == -1)
	{
	    printf("Element is not present in array");
	}
	else
	{
	    printf("Element is present at index %d", result);
	}
	
	return 0;
}
