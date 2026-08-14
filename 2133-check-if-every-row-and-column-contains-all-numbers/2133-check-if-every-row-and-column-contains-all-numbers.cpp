class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size(); i++) {
            
            // Row
            set<int> row(matrix[i].begin(), matrix[i].end());
            
            if(row.size() != matrix.size())
                return false;

            // Column
            set<int> col;
            
            for(int j = 0; j < matrix.size(); j++) {
                col.insert(matrix[j][i]);
            }

            if(col.size() != matrix.size())
                return false;
        }

        return true;
    }
};