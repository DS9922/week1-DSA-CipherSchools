#include <iostream>
using namespace std;

int rainWater(vector<int> &heights){
  int n = heights.size();
  vector<int> lMax(n), rMax(n);
  lMax[0] = heights[0];
  rMax[n-1] = heights[n-1];
  for(int i=1; i<n; i++){
    lMax[i] = max(heights[i], lMax[i-1]);
    rMax[n-i-1] = max(heights[n-i-1], rMax[n-i]);
  }
  int water = 0;
  for(int i=1; i<n; i++){
    water += (min(lMax[i], rMax[i])-heights[i]);
  }
  return water;
}

int main() 
{
    
}