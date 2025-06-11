// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    void heap(vector<int>& arr , int n , int i)
    {
        int max = i ;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if(left < n && arr[left] > arr[max])
        {
            max = left;
        }
        if(right < n && arr[right] > arr[max])
        {
            max = right;
        }
        if(max != i)
        {
            swap(arr[i] , arr[max]);
            heap(arr , n , max);
        }
    }
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = n / 2 - 1 ; i >= 0 ; i--)
        {
            heap(arr , n , i);
        }
        for(int i = n - 1 ; i > 0 ; i--)
        { 
            swap(arr[0] , arr[i]);
            heap(arr , i , 0);
        }
    }
};