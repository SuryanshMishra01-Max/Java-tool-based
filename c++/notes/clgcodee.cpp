#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    //ifstream infile;
    ofstream onfile;
    ifstream infile;string str;
    infile.open("C:\\users\\surya\\Desktop\\ayush.txt");
    onfile.open("C:\\users\\surya\\Desktop\\suturmurg.txt");
    infile<<str;
    while(getline(infile,str))
    {
    cout<<str;
    }
    infile.close();
    
}
