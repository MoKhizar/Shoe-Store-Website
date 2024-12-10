#include<iostream>
#include<fstream>
using namespace std;

//useful classes are:
/*1.fstreambase
2.ifstream input stream
3.ofstream output stream 


First u have to open a file. There re two wys
1.using constructor
2.using memeber function open() of class


*/
int main(){


 ofstream file("sample.txt");
 string userinput;
 cout<<"enter string"<<endl;
 getline(cin, userinput);
 file<<userinput<<endl;
 file.close();
 
 
/*string st="Harry Bhai";
string st2;
    //opening files using constructor
    ofstream out("sample.txt");  //to write
    out<<st;

//opening files using constructor and reading
    ifstream in("sample2.txt");  //to write
    getline(in, st2);
    cout<<st2;

*/

    return 0;
}