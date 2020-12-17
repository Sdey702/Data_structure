#include<iostream>
 #include<string>
using namespace std;

int main(){

  string str;
  getline(cin,str);
  //append()
  for(int i=0;str[i]!='\0';i++) cout<< str[i];
  string str1 = " baby";
  str.append(str1);//+
  cout <<"\n"<< str;

 //access
   cout << "\nat 0 position = " << str[0];
 //clear string clear
  //str.clear();
  cout <<"\n"<< str;
 // compa00000re

 bool a = str1.compare(str1);
 cout<<endl <<a<<endl;
 str.clear(); 

 if(str.empty()) cout << "\nstring is empty";

 string s="nincompoop";
 //only erase(3) erase everything after nin
  // s.erase(3);
 // s.erase(start index frome delete,end index)
 s.erase(3,3);//o/p -> nonpoop
 cout << endl << s <<endl;


 //find("word"/'chracter')

 cout<< endl << s.find('p');
 //length
 cout<<endl;
 cout<< s.length()<<endl;


  string s2="123";
 //string to integer stoi
  int x = 1+stoi(s2);
  cout<<endl<<x<<"\n";
 // intege to string
 cout<<"\n"<< to_string(123)+"hi";

}



