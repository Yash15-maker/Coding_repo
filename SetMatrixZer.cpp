#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<pair<int, int>> p;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    p.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            int x = p[i].first;
            int y = p[i].second;
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[x][j] = 0;
            }
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[j][y] = 0;
            }
        }
    }
};

// Approach
// input-[[1,1,1],[1,0,1],[1,1,1]]

// Step-1
// 1.> Check where the zero element is present then store the index for the i,j like 0 will come for this and store it into the pair.
// 2.> check for the each row and each column and make them zero in the original array.
// 3.> Like i=2 ,j=3 so make i and j both row column zero.
