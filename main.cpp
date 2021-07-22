//
// Created by Kylian Lee on 2021/07/21.
//

#include <cstdio>
#include <vector>
using namespace std;

vector<vector<char>> v;

void PrintStar(int r, int c, int num);

int main(){
  int num;
  scanf("%d", &num);
  v.resize(num);
  for (int i = 0; i < num; ++i) {
    v[i].resize(num, ' ');
  }
  PrintStar(0, 0, num);
  int i ,j;
  for (i = 0; i < num; ++i) {
    for (j = 0; j < num; ++j) {
      printf("%c", v[i][j]);
    }
    if(i == num && j == num)
      break;
    printf("\n");
  }
}

void PrintStar(int r, int c, int num){
  if(num == 1) {
    v[r][c] = '*';
    return;
  }
  int size = num / 3;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(i == 1 && j == 1)
        continue;
      PrintStar(r + i * size, c + j * size, size);
    }
  }
}