#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

void p_board(char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3, char arr[3][3])
  {

  int i,j;
  cout << "Current Board: \n";
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++)
      {
	cout<<"\t"<<arr[i][j];
      }
    cout<<endl;
  }
}
void reset_board(char arr[3][3])
{
  arr[0][0] = '-';
  arr[0][1] = '-';
  arr[0][2] = '-';
  arr[1][0] = '-';
  arr[1][1] = '-';
  arr[1][2] = '-';
  arr[2][0] = '-';
  arr[2][1] = '-';
  arr[2][2] = '-';
}

int main()
{
  char a1 = '-';
  char a2 = '_';
  char a3 = '_';
  char b1 = '-';
  char b2 = '-';
  char b3 = '-';
  char c1 = '4';
  char c2 = '-';
  char c3 = '8';  
  char arr[3][3] = {a1, a2, a3, b1, b2, b3, c1, c2, c3};
  p_board(a1, a2, a3, b1, b2, b3, c1, c2, c3, arr);
  reset_board(arr);
  p_board(a1, a2, a3, b1, b2, b3, c1, c2, c3, arr);

}


