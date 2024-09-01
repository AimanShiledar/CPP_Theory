//Cpp program for Object and Class

#include <iostream>
#include<string>
using namespace std;


  class Student{
    public:
    //Properties (data members)
    string name;
    int rollNumber;
    int age;
    
    //Function to display student information
    void displayInfo(){
      cout<<"Name: "<<name<<endl;
      cout<<"Roll Number: "<<rollNumber<<endl;
      cout<<"Age: "<<age<<endl;
    }
    };
    int main(){
      //Create objects (instances) of the student class
      Student s1;
      Student s2;
      
      // set properties for Student1
      s1.name= "Aiman";
      s1.rollNumber= 35;
      s1.age= 19;
      
      //set properties for Student2
      s2.name= "Jennie";
      s2.rollNumber= 29;
      s2.age= 19;
      
      //Display information for each student
      cout<<"s1 information: "<<endl;
      s1.displayInfo();
      
      cout<<endl; // for better readability
      
      cout<<"s2 information: "<<endl;
      s2.displayInfo();
    
    return 0;
}