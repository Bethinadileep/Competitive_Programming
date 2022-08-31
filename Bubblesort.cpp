#include <iostream>

using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
		{
		    for(int j = 0; j < n - i -1; j++)
		    {
		        if(arr[j] > arr[j+1])
		        {
		            int temp = arr[j];
		            arr[j] = arr[j+1];
		            arr[j+1] = temp;
		        }
		    }
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
