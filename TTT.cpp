#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main()
  {
  int arr[3][3] = {1, 2, 3, 1, 2, 3, 1, 2, 3};
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


