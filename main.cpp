#include <iostream>
#include <fstream>
#include <string>
#include "src/DynamicArray.hpp"
using namespace std;
int main() {
  DynamicArray a;
  ifstream f;
  string file = "../src/";
  cout << "Please enter a filename: ";
  string filename;
  getline(cin,filename);
  f.open(file+filename+".csv");
  if(f.is_open()){
    string line;
    getline(f,line);
    string integer{""};
    for(char selInteger : line){
      if(selInteger != ','){
        integer += selInteger;
      }
      else{
        a.push_back(stoi(integer));
        integer = "";
      }
    }
    // to get last integer
    if(integer != ""){
      a.push_back(stoi(integer));
      integer = "";
    }
  }
  else{
    cout << "Cannot open file..." << endl;
  }
  f.close();
  if(a.getSize() % 2 == 0){
    double sum1 = (a.get((a.getSize()/2.0)-1));
    double sum2 = (a.get((a.getSize()/2.0)));
    cout << "The median is " << ((sum1+sum2)/2) << endl;
  }else{
    cout << "The median is " << (a.get((a.getSize()/2.0))) << endl;
  }
}
