-> O(log n) (stack memory lagti hai har recursive call ke liye)
-> Function Call Overhead Hota hai (har call stack mai push hoti hai) 
-> Thodi slow due to function call overhead
-> Iterative is faster 

// Recursive Binary Search function
int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high) {
        return -1;  // Element not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;  // Found at index mid
    }
    else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    }
    else {
        return binarySearch(arr, mid + 1, high, target);
    }
}
