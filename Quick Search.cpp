#include <iostream>

using namespace std;

int part(int* arr, int first, int last){

    int pivot = arr[last];
    int j = first-1;

    for (int i = first; i <= last-1; i++){

        if (arr[i] < pivot){
            j++;
            swap(arr[i], arr[j]);
        }
    }

    j++;
    swap(arr[j], arr[last]);
    return j;
}



int quickSearch(int* arr, int first, int last, int target){

    int pi = part(arr, first, last);

    if (target == pi){
        return arr[pi];
    }
    else if (target < pi){
        return quickSearch(arr, first, pi-1, target);
    }
    else {
        return quickSearch(arr, pi+1, last, target);
    }
}





int main()
{


    int arr[] = {5, 7, 6, 3};

    cout << quickSearch(arr, 0, 3, 3) << endl;


    return 0;
}
