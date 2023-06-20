#include <iostream>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat){
  int sx=0, sy=0, ex=mat.size()-1, ey=mat[0].size()-1;
  vector<int> result(mat.size() * mat[0].size());
  int ctr = 0;
  while(sx<=sy; j<=ey; j++){
    for(int j=sy; j<=ey; j++){
      result[ctr++] = mat[sx][j];
    }
    sx++;
    
    for(int i=sx; i<=ex; i++){
      result[ctr++] = mat[i][ey];
    }
    ey--;
    
    if(sx <= ex){
      for(int j=ey; j>=sy; j--){
        result[ctr++] = mat[ex][j];
      }
      ex--;
    }
    
    if(sy <= ey){
      for(int i=ex; i>=sx; i--){
        result[ctr++] = mat[i][sy];
      }
      sy++;
    }
  }
  return result;
}

int main() 
{
    
}