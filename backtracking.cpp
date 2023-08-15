#include <iostream>
#include <vector>

using namespace std;
/*
void permutation(string &str, int i) {
if (i == str.size()) {
  cout << str << endl;
  return;
}

for (int j = i; j < str.size(); j++) {
  swap(str[i], str[j]);
  permutation(str, i + 1);
  swap(str[i], str[j]);
}
}
 bool canWeGo(int a, int b, vector<vector<int>> &grid) {
return (a < grid.size() and b < grid.size() and a >= 0 and b >= 0) and
       grid[a][b] == 1;
}
int ratInMaze(int i, int j, vector<vector<int>> &grid) {



  int n = grid.size();
  if (i == n - 1 and j == n - 1) {
    return 1;
  }

  int ans = 0;
  grid[i][j] = 2;

  if (canWeGo(i, j + 1, grid)) {
    ans += ratInMaze(i, j + 1, grid);
  }

  if (canWeGo(i + 1, j, grid)) {
    ans += ratInMaze(i + 1, j, grid);
  }

  if (canWeGo(i, j - 1, grid)) {
    ans += ratInMaze(i, j - 1, grid);
  }

  if (canWeGo(i - 1, j, grid)) {
    ans += ratInMaze(i - 1, j, grid);
  }

  grid[i][j] = 1;

  return ans;
}

bool canWePlace(int row, int col, vector<vector<char>> grid) {
  // For vertical
  for (int i = row - 1; i >= 0; i--) {
    if (grid[i][col] == 'Q') {
      return false;
    }
  }

  // For top-right
  for (int i = row - 1; i >= 0; i--) {
    if (grid[i][col + row - i] == 'Q') {
      return false;
    }
  }
  // For top-left
  for (int i = row - 1; i >= 0; i--) {
    if (grid[i][col - (row - i)] == 'Q') {
      return false;
    }
  }

  return true;
}

void nQueen(int currentRow, int n, vector<vector<char>> &grid) {

  if (currentRow == n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << grid[i][j] << " ";
      }

      cout << '\n';
    }

    cout << "**\n";
  }

  for (int col = 0; col < n; col++) {
    if (canWePlace(currentRow, col, grid)) {
      grid[currentRow][col] = 'Q';
      nQueen(currentRow + 1, n, grid);
      grid[currentRow][col] = '.';
    }
  }
}


bool canWePlace(int (*grid)[9], int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (grid[i][col] == num) {
            return false;
        }

        if (grid[row][i] == num) {
            return false;
        }
    }

    int r = (row / 3) * 3;
    int c = (col / 3) * 3;

    for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            if (grid[i][j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool sudoku(int (*grid)[9], int row, int col) {
    if (col == 9) return sudoku(grid, row + 1, 0);
    if (row == 9) return true;
    if (grid[row][col] == 0) {
        for (int num = 1; num <= 9; num++) {
            if (canWePlace(grid, row, col, num)) {
                grid[row][col] = num;
                bool res = sudoku(grid, row, col + 1);
                if (res) return true;
                grid[row][col] = 0;
            }
        }
        return false;
    } else {
        return sudoku(grid, row, col + 1);
    }
}


void sudoku_solve(int grid[9][9]) {
    sudoku(grid, 0, 0);
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}


*/

int main() {
  // string str = "ABCDEFG";
  // vector<vector<int>> grid = {
  // {1, 1, 1, 1}, {0, 1, 0, 1}, {0, 1, 0, 1}, {0, 1, 1, 1}};
  // int ans = ratInMaze(0, 0, grid);
  // cout << ans;
  // int n = 4;
  // vector<vector<char>> grid(n, vector<char>(n, '.'));
  // nQueen(0, n, grid);

  return 0;
}