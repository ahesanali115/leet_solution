class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        vector<string> rows(numRows, "");

        int currentRow = 0;
        int step = 1;

        for (char c : s) {
            rows[currentRow] += c;

            if (currentRow == 0) {
                step = 1;
            } else if (currentRow == numRows - 1) {
                step = -1;
            }

            currentRow += step;
        }

        string result = "";
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};