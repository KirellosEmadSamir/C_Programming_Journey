#include <stdio.h>

// Function to calculate the minimum sum of 4 numbers (ignores the largest number)
long minsum(int arr[], int n) {
    long total_sum = 0;        // Variable to store the sum of all elements
    int max = arr[0];          // Initialize the maximum number with the first element
    
    for(int i = 0; i < n; i++) {       // Loop through all elements in the array
        total_sum += arr[i];           // Add the current element to the total sum
        if(arr[i] > max) max = arr[i]; // Update max if current element is larger
    }
    
    return total_sum - max;    // Minimum sum = total sum minus the largest element
}

// Function to calculate the maximum sum of 4 numbers (ignores the smallest number)
long maxsum(int arr[], int n) {
    long total_sum = 0;        // Variable to store the sum of all elements
    int min = arr[0];          // Initialize the minimum number with the first element
    
    for(int i = 0; i < n; i++) {       // Loop through all elements in the array
        total_sum += arr[i];           // Add the current element to the total sum
        if(arr[i] < min) min = arr[i]; // Update min if current element is smaller
    }
    
    return total_sum - min;    // Maximum sum = total sum minus the smallest element
}

int main() {
    int arr[5];                 // Array to store 5 input numbers
    
    // Read 5 numbers from standard input (stdin)
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);   // Read each number and store it in the array
    }
    
    long min_sum = minsum(arr, 5);   // Call minsum function to calculate minimum sum
    long max_sum = maxsum(arr, 5);   // Call maxsum function to calculate maximum sum
    
    printf("%ld %ld\n", min_sum, max_sum);  // Print min sum and max sum as output
    
    return 0;   // End of program
}