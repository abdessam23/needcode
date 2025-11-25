#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;



class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            for (int i = 0;i < 9;i++)
            {
                unordered_set<char> p;
                for(int j = 0; j < 9;j++)
                {
                    if (board[i][j]  == '.') continue;
                    if(p.count(board[i][j])) return false;
                    p.insert(board[i][j]);
                }
            }
            for (int j = 0;j < 9;j++)
            {
                unordered_set<char> p;
                for(int i = 0; i < 9;i++)
                {
                    if (board[i][j]  == '.') continue;
                    if(p.count(board[i][j])) return false;
                    p.insert(board[i][j]);
                }
            }
            int f = 0;
            
            for (int z = 0;z < 9;z +=3)
            {
                unordered_set<char> s;
             for (int i = z;i < z+3;i++)
                {
                    for(int j = f; j < f+3;j++)
                    {
                        if (i == 8 && j == 8 && z==6)  
                            return true; 
                        if (board[i][j]  == '.') continue;
                        if(s.count(board[i][j])) return false;
                        s.insert(board[i][j]);
                        
                        
                    }
                }
                if (z == 6){
                    z = -3;
                    f +=3;
                }
            }
            return true;
        }
};


int main()
{
 vector<vector<char>> b ={{'.','.','.','.','5','.','.','1','.'},
                         {'.','4','.','3','.','.','.','.','.'},
                         {'.','.','.','.','.','3','.','.','1'},
                         {'8','.','.','.','.','.','.','2','.'},
                         {'.','.','2','.','7','.','.','.','.'},
                         {'.','1','5','.','.','.','.','.','.'},
                         {'.','.','.','.','.','2','.','.','.'},
                         {'.','2','.','9','.','.','.','.','.'},
                         {'.','.','4','.','.','.','.','.','.'}};
    Solution a;
    if (a.isValidSudoku(b))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}