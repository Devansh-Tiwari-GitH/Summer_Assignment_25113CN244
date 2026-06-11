#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Assume the first two elements are the largest
    int largest = arr[0];
    int secondLargest = arr[1];
    // check 'largest' actually holds the bigger value
    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    // check for the second largest element through rest of the array
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Old largest becomes second largest
            largest = arr[i];        // New largest found
        } 
        else if (arr[i] > secondLargest) {
            secondLargest = arr[i];  // New second largest found
        }
    }
    printf("The second largest element is: %d\n", secondLargest);
    return 0;
}