#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct {
  char f_name[];
  char l_name[];
  int id;
  float gpa;
}
char response[];

int main()
{
  while(response != "quit") {
    cout << "If you want to add a student type ADD. If you want to print the list type PRINT. If you want to Delete a student type DELETE. If you wish to quit type QUIT" << endl;
    response = tolower(cin.getline());
    if(response == "add") {
      //add function
    }
    else if(response == "print") {
      //print function
    }
    else if(response == "delete") {
      //delete function
    }
  }
}
