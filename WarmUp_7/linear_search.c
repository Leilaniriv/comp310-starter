#include <stdio.h>

int main (int argc, char** argv)
{
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int index = linearSearch(array, target);

     if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

int linearSearch(int arr[], int target){
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}