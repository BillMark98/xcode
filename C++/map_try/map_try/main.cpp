//
//  main.cpp
//  map_try
//
//  Created by Bill on 1/21/18.
//  Copyright © 2018 Bill. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
using namespace std;
class Student
{
private:
    string name;
    int matr;
    int age;
public:
    Student() { }
    Student(string na,int ma = 100, int ager = 20) : name(na),matr(ma),age(ager) { }
    ~Student() { }
    const string & getname() const { return name;}
    int getage() const { return age;}
    int getmatr() const {return matr;}
    friend ostream & operator<<(ostream & os,const Student &);
    
};
typedef map<string, Student * > mapStudent;
int main(int argc, const char * argv[]) {
    mapStudent maps;
    maps["me"] = new Student("me");
    maps["you"] = new Student("you");
    cout << *(maps["me"]) << endl;
    
    Student * atrz = maps["e"];
    if(atrz == nullptr)
    {
        cout << "Error.\n";
    }
    else
    {
        cout << "it's not a nullptr.\n";
    }
    
    delete maps["me"];
    delete maps["you"];
    
    string s1 = " oh";
    string pl = "Comeon" + s1 + " yes it.";
    try {
        cout << "here is the fun.\n";
        throw pl;
    } catch(const char * st){
        cout << "Catching the char * : \n";
        cout << st << endl;
    }
    catch (const string & str) {
        cout << "Catching the string pl:\n";
        cout << str << endl;
    }
    /*
    string tryo;
    cout << "Enter.\n";
    cin >> tryo;
    if(tryo == "Hello")
    {
        cout << "It's equal.\n";
    }
     */
    vector<int> arravec;
    ifstream inFile;
    inFile.open("mapdata.txt");
    if(!inFile.is_open())
    {
        cout << "Error\n";
        exit(1);
    }
    cout << "Enter some number\n";
    int num;
    while(inFile >> num)
    {
        arravec.push_back(num);
        
    }
    int siz = (int)arravec.size();
    int arraz[siz];
    for(int i = 0; i < siz; i++)
    {
        arraz[i] = arravec[i];
    }
    for(int i = 0; i < siz; i++)
    {
        cout << arraz[i] << " ";
    }
    cout << endl;
    if(inFile.good())
    {
        string name;
        inFile >> name;
         cout << name;
    }
    else{
        inFile.clear();
        cout << "No string.\n";
        string name;
        inFile >> name;
        cout << name << endl;
    }
   
    inFile.close();
    
    return 0;
}

ostream & operator<<(ostream & os, const Student & st)
{
    os << "\nStudent name: "<< st.getname() << endl;
    os << "Student age: " << st.getage() << endl;
    
    return os;
}
