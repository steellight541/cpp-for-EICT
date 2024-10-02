#include <iostream>

using namespace std;

void ResetResult(int result[3][1], int resultSizeX, int resultSizeY)
{
  for (int i = 0; i < resultSizeX; i++)
  {
    for (int j = 0; j < resultSizeY; j++)
    {
      result[i][j] = 0;
    }
  }
}

void PrintResult(int result[3][1], int resultSizeX, int resultSizeY)
{
  for (int i = 0; i < resultSizeX; i++)
  {
    for (int j = 0; j < resultSizeY; j++)
    {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}

void CalcResult(int matrix[3][3], int vector[3][1], int result[3][1], int resultSizeX, int resultSizeY)
{
  for (int i = 0; i < resultSizeX; i++)
  {
    for (int j = 0; j < resultSizeY; j++)
    {
      for (int k = 0; k < resultSizeX; k++)
      {
        result[i][j] += matrix[i][k] * vector[k][j];
      }
    }
  }
}

void MatrixVectorMultiplicationCalc()
{
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int vector[3][1] = {{2}, {1}, {3}};
  // calculating dynamic size of result matrix
  const int resultSizeX = sizeof(matrix) / sizeof(matrix[0]);
  const int resultSizeY = sizeof(vector[0]) / sizeof(vector[0][0]);
  int result[resultSizeX][resultSizeY];
  // reseting the matrix
  ResetResult(result, resultSizeX, resultSizeY);
  // calculating the result matrix
  CalcResult(matrix, vector, result, resultSizeX, resultSizeY);
  // printing the result matrix
  PrintResult(result, resultSizeX, resultSizeY);
}



void DayOfTheWeek()
{
  string daysOfTheWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  unsigned int dayOfTheWeek = 0;
  do
  {
    cout << "Please enter the day of the week: ";
    cin >> dayOfTheWeek;
  } while (dayOfTheWeek < 1 || dayOfTheWeek > 7);

  cout << "Then it's " << daysOfTheWeek[dayOfTheWeek - 1] << " Today" << endl;
}

int main()
{
  MatrixVectorMultiplicationCalc();
}

