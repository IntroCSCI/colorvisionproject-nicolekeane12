//Author: Nicole Keane
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool add_value(double val, vector<double> &values);
void print_msg1();
void print_msg2();
int main()
{
  string input;
  double color;
    string filename="Colors.txt";
fstream reader;
//
vector<double> values;
reader.open (filename,ios::in);
if(reader.is_open()){
  while(reader>>input){ 
    //cout<<input<<endl;
    if(add_value(stod(input),values)==true)
    {
      if(values[3]>0.5)
      {
        print_msg1();
      }else
      {
        print_msg2();
      }
      values.clear();
    }
  }
}
  return 0;
}

void print_msg1()
{
  cout<<"This color is unlikely to be problematic based on transperancy"<<endl;
}

void print_msg2()
{
  cout<<"This color is likely to be problematic based on transperancy"<<endl;
}

bool add_value(double val, vector<double> &values)
{
    values.push_back(val);
    if(values.size()==4)
      return true;
    return false;
}
