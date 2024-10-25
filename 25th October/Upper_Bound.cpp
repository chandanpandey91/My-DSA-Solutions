int upperBound(vector<int> &v, int x, int n) {
    int low = 0;
    int high = n;

    while (low < high) {
        int mid = (high + low) / 2;
        
        // If v[mid] is less than or equal to x, we need to move to the right half
        if (v[mid] <= x) {
            low = mid + 1;
        } else {
            high = mid; // This could be the potential upper bound
        }
    }
    
    return low;
}
