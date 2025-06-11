class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
      sort(arr , arr + n);
      int count = abs(B - A) + 1;
      for(int i = 0 ; i < n ; i++)
      {
          if(arr[i] == arr[i-1])
          {
              continue;
          }
          if(arr[i] >= A && arr[i] <= B)
          {
              count--;
          }
      }
      if(count == 0)
      {
          return true;
      }
      return false;
    }
};
