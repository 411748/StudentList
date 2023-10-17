#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Person{
  char f_name[20];
  char l_name[20];
  int id;
  float gpa;
};

void add(vector<Person*>& List) {
  Person* Student = new Person();
  cout << "Enter the first name of the student: " << endl;
  cin >> Student-> f_name;
  cout << "Enter the last name of the student: " << endl;
  cin >> Student-> l_name;
  cout << "Enter the student ID: " << endl;
  cin >> Student-> id;
  cout << "Enter the student gpa: " << endl;
  cin >> Student-> gpa;
  cin.ignore(80,'\n');
  List.push_back(Student);
}

void print(vector<Person*>&List) {
  for(std::vector<Person*>:: iterator it = List.begin(); it != List.end(); ++it) {
    cout << (*it)-> f_name << " " << (*it)-> l_name << " " << (*it)-> id << " " << (*it)-> gpa << endl;
  }
}

void remove(vector<Person*>&List) {
  int ID_R;
  cout << "Enter the student ID you want to remove" << endl;
  cin >> ID_R;
  for(std::vector<Person*>:: iterator it = List.begin(); it != List.end(); ++it) {
    if((*it)-> id == ID_R){
	delete *it;
	List.erase(it);
	break;
    }
  }
}
  
int main()
{ 
  char response[20]; 
  vector<Person*> List;
  while(strcmp(response, "QUIT") != 0) {
    cout << "If you want to add a student type ADD. If you want to print the list type PRINT. If you want to Delete a student type DELETE. If you wish to quit type QUIT" << endl;
    cin >> response;
    if(strcmp(response, "ADD") == 0) {
      add(List);
    }
    else if(strcmp(response, "PRINT") == 0) {
      print(List);
    }
    else if(strcmp(response, "DELETE") == 0) {
      remove(List);
    }
  }
}
