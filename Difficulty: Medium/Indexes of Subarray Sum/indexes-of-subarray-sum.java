class Solution {
    static ArrayList<Integer> subarraySum(int[] arr, int target) {
        int start = 0;
        int currentSum = 0;

        for (int end = 0; end < arr.length; end++) {
            currentSum += arr[end];

            while (currentSum > target && start <= end) {
                currentSum -= arr[start];
                start++;
            }

            if (currentSum == target) {
                return new ArrayList<>(Arrays.asList(start + 1, end + 1)); // 1-based index
            }
        }

        return new ArrayList<>(Arrays.asList(-1));
    }
}
