//Nick Braun
//10/17/2023
//Student list - Creates a list where users can quit, add, print, and delete students with their name, gpa, and id number

//Adding librays 
#include <iostream>
#include <cstring>
#include <vector>

//Standord 
using namespace std;

//Struct design
struct Person{
  char f_name[20];
  char l_name[20];
  int id;
  float gpa;
};

//Function to add a user to the List
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

//Function to print the list
void print(vector<Person*>&List) {
  for(std::vector<Person*>:: iterator it = List.begin(); it != List.end(); ++it) {
    cout << (*it)-> f_name << " " << (*it)-> l_name << " " << (*it)-> id << " " << (*it)-> gpa << endl;
  }
}

//Function to Remove user from the list
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

//Main function
int main()
{ 
  char response[20];
  //Creating vector named list
  vector<Person*> List;
  //User wants to continue using program
  while(strcmp(response, "QUIT") != 0) {
    //Asking user what they want to do
    cout << "If you want to add a student type ADD. If you want to print the list type PRINT. If you want to Delete a student type DELETE. If you wish to quit type QUIT" << endl;
    cin >> response;
    //User wants to add
    if(strcmp(response, "ADD") == 0) {
      add(List);
    }
    //User wants to print
    else if(strcmp(response, "PRINT") == 0) {
      print(List);
    }
    //User wants to delete
    else if(strcmp(response, "DELETE") == 0) {
      remove(List);
    }
  }
}
