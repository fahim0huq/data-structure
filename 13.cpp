//13. Write a program to create a Maxheap of n elements and then display the elements of the
//heap.

#include<bits/stdc++.h>
using namespace std;

void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void displayHeap(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the size of the Max Heap (n):" << endl;
    int n;
    cin >> n;

    vector<int> maxHeap(n);

    cout << "Enter the elements of the Max Heap:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> maxHeap[i];
    }
    buildMaxHeap(maxHeap);

    cout << "Max Heap: ";
    displayHeap(maxHeap);

    return 0;
}
