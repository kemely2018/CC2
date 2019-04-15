//	quicksort
#include<iostream>
using namespace std;
void mostrar(int* A, int n) {
	for (int i = 0;i<n;i++)
		cout<< A[i] << " ";
    cout<<"\n";
}

void quicksort(int arr[], int low, int high) {
	int i, j, temp, pivot;

	if (low < high) {
		pivot = low;
		i = low;
		j = high;

		while (i < j) {

			while (arr[i] <= arr[pivot] && i <= high)
				i++;
				
			while (arr[j] > arr[pivot] && j >= low)
				j--;

			if (i < j) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		temp = arr[j];
		arr[j] = arr[pivot];
		arr[pivot] = temp;
		quicksort(arr, 0, j-1);
		quicksort(arr, j+1, high);
	}
}

int main( ) {
	int a[] = {9,8,7,6,4,5,3,2,1,8}, n = 10;
	cout<<"ARREGLO ORIGINAL: ";
	mostrar(a, n); // 9876453218
	quicksort(a, 0, n-1);
	cout<<"ARREGLO ORDENADO: "; 
	mostrar(a, n); // 1234567889
	return 0;
}
