import java.util.*;

public class Main
{
	public static void main(String[] args) {
		int arr[] = {13,46,24,52,20,9};
		System.out.println("Before Sorting the Bubble Sort");
		for(int i = 0; i < arr.length; i++)
		{
		    System.out.print(arr[i]+" ");
		}
		System.out.println();
		
		int n = arr.length;
		for(int i = 0; i < n - 1; i++)
		{
		    int min = i;
		    for(int j = i+1; j < n; j++)
		    {
		       
		        if(arr[j] < arr[i])
		        {
		           min = j;
		        }
		    }
    		//swap
    		int temp = arr[min];
    		arr[min] = arr[i];
    		arr[i] = temp;
		}
		System.out.println("After Sorting the Selection Sort Sort");
		for(int i = 0; i < n; i++)
		{
		    System.out.print(arr[i]+" ");
		}
	}
}
