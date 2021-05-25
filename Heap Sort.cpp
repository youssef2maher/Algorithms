#include <iostream>

using namespace std;


void heapify(int arr[], int n, int i){

    int l = 2*i+1;
    int r = 2*i+2;

    int maxx = i;
    if (l < n && arr[l] > arr[maxx]){
        maxx = l;
    }

    if (r < n && arr[r] > arr[maxx]){
        maxx = r;
    }

    if (maxx != i){
        swap(arr[maxx], arr[i]);
        heapify(arr, n, maxx);
    }

}


void buildHeap(int arr[], int n){

    for (int i = (n/2) - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
}



void heapSort(int arr[], int n){

    buildHeap(arr, n);
    for (int i = n-1; i >= 0; i--){
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}



int main()
{

    int arr[10] = {5, 7, 6, 2, 1, 0, 9, 3, 4, 8};
    heapSort(arr, 10);

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
