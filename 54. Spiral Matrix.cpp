#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int total_elements = n * m;
        int startrow = 0;
        int lastcol = m - 1;
        int endrow = n - 1;
        int startcol = 0;
        int count = 0;

        while (count < total_elements) {
            // Traverse from left to right
            for (int i = startcol; i <= lastcol && count < total_elements; i++) {
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            // Traverse from top to bottom
            for (int i = startrow; i <= endrow && count < total_elements; i++) {
                ans.push_back(matrix[i][lastcol]);
                count++;
            }
            lastcol--;

            // Traverse from right to left
            for (int i = lastcol; i >= startcol && count < total_elements; i--) {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            // Traverse from bottom to top
            for (int i = endrow; i >= startrow && count < total_elements; i--) {
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }

        return ans;
    }
};
