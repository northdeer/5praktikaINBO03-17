#include <iostream>

using namespace std;
void sort(int *arr1)
{
for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		if (arr1[j+1] < arr1[j])
		{
			int change = arr1[j+1];
			arr1[j+1] = arr1[j];
			arr1[j] = change;
		}
	}
}
void sort(double *arr2)
{
	for (int i=0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		if (arr2[j+1] < arr2[j])
		{
			double change = arr2[j+1];
			arr2[j+1] = arr2[j];
			arr2[j] = change;
		}
	}
}

main()
{
	
	int arr1[3];
	double arr2[3];
	
	for (int i=0; i<3; i++)
	cin>> arr1[i];
	for (int i=0; i<3; i++)
	cin >> arr2[i];
	sort(arr1);
	sort(arr2);
	cout << "Integers: " << endl;
	for (int i=0; i < 3;i++)
	cout << "a" << i+1 << " = " << arr1[i] << endl;
	cout << "Doubles: " << endl;
	for (int i=0; i < 3;i++)
	cout << "b" << i+1 << " = " << arr2[i] << endl;
	return 0;
}
