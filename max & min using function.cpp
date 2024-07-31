#include <iostream>
using namespace std;

int findMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for(int i = 1; i < size; i++) 
	{
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;
    int min, max;

    findMinMax(arr, size, min, max);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}
