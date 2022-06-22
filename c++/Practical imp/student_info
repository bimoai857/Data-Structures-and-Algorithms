//Takes details on n students and displays them.


#include<iostream>
using namespace std;

class Student{
  char name[20];
  char address[20];
  char phone[20];
  char branch[20];
  int roll;
  
  public:
  void get_data();
  void show_data();
  
};

void Student::get_data(){
    cout<<"Enter the following details: "<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your address: ";
    cin>>address;
    cout<<"Enter your phone number: ";
    cin>>phone;
    cout<<"Enter your roll number: ";
    cin>>roll;
   
}

void Student::show_data(){
    cout<<"Student Info."<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone number: "<<phone<<endl;
    cout<<"Roll number: "<<roll<<endl;
    
    
}

int main(){
    Student s1[100];
    int i,n;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
        s1[i].get_data();
    }
    for(i=0;i<n;i++){
        s1[i].show_data();
    }
    return 0;
}
