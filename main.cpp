//Author: Cristina Perez
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
 
char first = ' ', last = ' ', current;
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
  ifstream in;
  in.open("example.txt");
  vector <char> list;
  if( in.is_open() )
  {  
  while( !in.eof() )
  {
  in>>current;
//  list.push_back(current); 
  if( current >= 'a' || current <= 'z' || current >= 'A' || current <= 'Z')
  {
//  list.push_back(current);
//for(int i = 0; i < list.size(); i++)
//{
if( first == ' ')
{
  first = current;
}
else
{
last = current;
  }
  }
  }
  }
  else
  {
  in.close();
  }
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
