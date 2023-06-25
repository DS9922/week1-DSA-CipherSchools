#include<bits/stdc++.h>
using namespace std;

#define POSSIBLE_MOVES 4
int xMoves[] = {0, 0, 1, -1};
int yMoves[] = {1, -1, 0, 0};

bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y, const int &R, const int &C){
    return(x >= 0 && x < R && y >= 0 && y < C && mat[x][y] == 1 && !visited[x][y]);
}

bool ratInMaze(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y, const int &R, const int &C){
    if(x == R-1 && y == C-1 && mat[R-1][C-1] == 1){
        visited[x][y] = true;
        return true;
    }
    if(isSafe(mat, visited, x, y, R, C)){
        visited[x][y] = true;
        for(int i=0; i<POSSIBLE_MOVES; i++){
            int newX = x + xMoves[i];
            int newY = y + yMoves[i];
            if(ratInMaze(mat, visited, newX, newY, R, C)){
                return true;
            }
        }
    }
}

bool ranInMaze(vector<vector<int>> &mat){
    int R = mat.size();
    if(R == 0) return true;
    int C = mat[0].size();
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    return ratInMaze(mat, visited, 0, 0, R, C);
}

int main(){

}