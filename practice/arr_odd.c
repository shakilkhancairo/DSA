#include<stdio.h>

void arr_odd_count(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    printf("The total number of odd numbers in the array is %d\n", count);
}

int main() {
    int a[] = {10, 65, 84, 62, 77, 11};
    int size = sizeof(a) / sizeof(a[0]);  // Calculate array size

    arr_odd_count(a, size);  // Pass correct size

    return 0;

}