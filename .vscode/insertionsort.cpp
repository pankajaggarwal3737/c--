#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	int i, key, j;
	for(i=1; i<n; i++) {
		key=arr[i];
		j=i-1;

		while(j >= 0 && arr[j]>key) {
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
}
void printArray(int array[], int size) {
	int i;
	for(i=0; i< size; i++) {
		cout<<array[i]<<" ";
	}
	cout<<endl;

}



int main() {
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in the array: ";
	for(int i=0; i<n; i++) {
		cin>>arr[i];

	}

	cout<<"Array before Insertion Sort: ";
	printArray(arr, n);

	cout<<"\nArray after Sorting: ";
	insertionSort(arr, n);
	printArray(arr, n);
}






