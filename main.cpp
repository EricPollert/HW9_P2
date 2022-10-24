#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  const int COL_NUM = 5;
  const int ROW_NUM = 5;
  int grade [ROW_NUM][COL_NUM] = { {100, 100, }};

  for (int r = 0; r < ROW_NUM; r++){
  for (int c = 0; c < COL_NUM; c++){
    cout << setw(5) << grade[r][c];
    
    }
    int avg = (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4]) / 4;
    cout << setw(5) << avg;
    int avg1 = (grade[r][1] * 0.2 + grade[r][2] * 0.3 + grade[r][3] * 0.3 + grade[r][4] * 0.2) / 4;
    cout << setw(5) << avg1;
    // code for 8th column
    int smallest;
    if(grade[r][1] < smallest){
      smallest = grade[r][1];
      }
    else if (grade[r][2] < smallest){
      smallest = grade[r][2];
      }
    else if (grade[r][3] < smallest){
      smallest = grade[r][3];
      }
    else (grade[r][4] < smallest){
      smallest = grade[r][4];
      
      }
    int avg2 = (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4]) / 4;
    cout << setw(5) << avg2;
    
    cout << endl;
  }
  
}