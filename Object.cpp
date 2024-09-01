#include <iostream>
#include <string>
using namespace std;

class myClass { //The class
public: //Access specifier
int myNum;  //Attribute (int variable)
string mySentence;  //Attribute (string variable)
};
int main(){
  myClass myObj; //Create an object of MyClass
  
  //Access attribute and set values
  myObj.myNum= 15;
  myObj.mySentence= "It's a odd number";
  
  //Print attribute values
  cout<<myObj.myNum<<"\n";
  cout<<myObj.mySentence;
  
  return 0;
}