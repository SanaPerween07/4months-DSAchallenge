class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while (i < n) {
            if (arr[i] == 0) {
                // Shift elements to the right to make space for the duplicate zero
                for (int j = n - 1; j > i; --j) {
                    arr[j] = arr[j - 1];
                }
                // Duplicate the zero
                if (i + 1 < n) {
                    arr[i + 1] = 0;
                }
                i += 2;
            } else {
                i++;
            }
        }
    }
};
