//Author: Cristina Perez
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
 
char first;
char last;
/*
fstream infile;
vector<char> list;

infile.open("example.txt");

if( infile.is_open() )
{

while( !infile.eof() )
{
  infile>>
*/
  char letter;
  ifstream in;
  in.open("example.txt");
  vector <char> list;
  in>>letter;
  list.push_back(letter);
  
  if( letter >= 'a' || letter <= 'z' || letter >= 'A' || letter <= 'Z')
  {
  for(int i = 0; i < list.size(); i++)
  {
  char first = list[i] ,
  last = list[ list.size()-1] ,  current;
  }
  }
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
