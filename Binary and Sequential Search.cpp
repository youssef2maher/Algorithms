#include <iostream>
#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int sequentialSearch(int* arr, int n, int num){

    for (int i = 0; i < n; i++){
        if (arr[i] == num){
            return i;
        }
    }

    return -1;
}



int binarySearch(int* arr, int num, int f, int l){

    if (l >= f){

        int mid = f + (l-f)/2;
        if (num == arr[mid]){
            return mid;
        }

        else if (num > arr[mid]){
            return binarySearch(arr, num, mid+1, l);
        }

        else if (num < arr[mid]){
            return binarySearch(arr, num, f, mid-1);
        }
    }

    return -1;
}



int main()
{

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};






    auto start = high_resolution_clock::now();

    sequentialSearch(arr, 10, 9);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;








    auto start = high_resolution_clock::now();

    binarySearch(arr, 11, 0, 10);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;



    return 0;
}
