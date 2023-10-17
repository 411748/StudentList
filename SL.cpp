#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Person{
  char f_name[];
  char l_name[];
  int id;
  float gpa;
}

void add(vector<Person*>& List) {
  Person* Student = new Person();
  cout << "Enter the first name of the student: " << endl;
  cin.getline(Student-> f_name);
  cout << "Enter the last name of the student: " << endl;
  cin.getline(Student-> l_name)
  cout << "Enter the student ID: " << endl;
  cin >> (Student-> id);
  cout << "Enter the student gpa: " << endl;
  cin >> (Student-> gpa);
  cin.ignore(80,'\n');
  List.push_back(Student);
}

void print(vector<Person*>&List) {

}
  
int main()
{
  char response(20); 
  vector<Person*> List;
  while(response != "quit") {
    cout << "If you want to add a student type ADD. If you want to print the list type PRINT. If you want to Delete a student type DELETE. If you wish to quit type QUIT" << endl;
    response = tolower(cin.getline());
    if(response == "add") {
      add(List);
    }
    else if(response == "print") {
      //print function
    }
    else if(response == "delete") {
      //delete function
    }
  }
}
