// Worked with John and Jake Thompson, and Eddie for certain parts of this problem

#include <iostream>
#include <iomanip>

using namespace std;

int eighth_COL(int grade1, int grade2, int grade3, int grade4){

int smallest = grade1;
    
    if (grade2 < smallest){
      smallest = grade2;
      }
    else if (grade3 < smallest){
      smallest = grade3;
      }
    else {
      smallest = grade4;
      }
  
  double average = (grade1 +grade2 + grade3 + grade4 - smallest) / 3;

  return average;
}

void printMatrix(int grade[][5], const int ROW_NUM, const int COL_NUM){
  for (int r = 0; r < ROW_NUM; r++){
  for (int c = 0; c < COL_NUM; c++){
    cout << setw(5) << grade[r][c];
    
    }
    double avg = (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4]) / 4;
    cout << setw(5) << avg;
    double avg1 = grade[r][1] * 0.2 + grade[r][2] * 0.3 + grade[r][3] * 0.3 + grade[r][4] * 0.2;
    cout << setw(5) << avg1;
    cout << setw(5) << eighth_COL(grade[r][1], grade[r][2], grade[r][3], grade[r][4]);
    
    cout << endl;
  }
  }

int main() {
  
  const int COL_NUM = 5;
  const int ROW_NUM = 5;
  int grade [ROW_NUM][COL_NUM] = {{1, 100, 100, 100, 100},
                                  {2, 100, 0, 100, 0},
                                  {3, 82, 94, 73, 86},
                                  {4, 64, 74, 84, 94},
                                  {5, 94, 84, 74, 64} };

  
printMatrix(grade, ROW_NUM, COL_NUM);
  
}
