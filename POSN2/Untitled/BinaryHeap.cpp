// C++ program for implementation of Heap Sort
#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    cout<<"arr[ l="<<l<<" ] = "<<arr[l]<<endl<<"arr[ r="<<r<<" ] = "<<arr[r]<<endl;
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
        cout<<"l success"<<endl;
    }

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
        cout<<"r success"<<endl;
    }
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        cout<<"largest != i"<<endl;
        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }

}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
        cout<<"-----------------------------"<<endl;
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver program
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter member of array :\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
