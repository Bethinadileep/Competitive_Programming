#include <iostream>

using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
		{
		    int min = i;
		    for(int j = i + 1; j < n; j++)
		    {
		        if(arr[j] < arr[i])
		        {
		           min = j;
		        }
		    }
		     int temp = arr[min];
		     arr[min] = arr[i];
		     arr[i] = temp;
		}
		cout<< "After Using Bubble sort" << endl;
		for(int i = 0; i < n; i++)
		{
		    cout << arr[i] << " ";
		}
}
int main()
{
    int arr[] = {13,46,24,52,20,9};
    cout << "Before Using Bubble Sort" << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubble_sort(arr,n);
    return 0;
}
