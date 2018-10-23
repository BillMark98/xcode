//
//  main.cpp
//  c++_myfirst
//
//  Created by Bill on 17/4/17.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <cctype>
template <typename T>
T max5(T *);
template <> const char * max5( const char *[]);
struct chaff
{
    char dross[20];
    int slag;
};
char buffer[512];
int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    /*char automobile[50];
     int year;
     double a_price;
     double d_price;
     ofstream outFile;
     outFile.open("carinfo1.txt");
     cout<<"Enter the make and model of automobile:";
     cin.getline(automobile,50);
     cout<<"Enter the model year:";
     cin>>year;
     cout<<"Enter the original asking price.";
     cin >> a_price;
     d_price = 0.913*a_price;
     cout<<fixed;
     cout.precision(2);
     cout.setf(ios_base::showpoint);
     cout<<"Make and model: "<<automobile<<endl;
     cout<<"Year: "<<year<<endl;
     cout<<"Was asking: $"<<a_price<<endl;
     cout<<"Now asking: $"<<d_price<<endl;
     
     
     
     outFile<<fixed;
     outFile.precision(2);
     outFile.setf(ios_base::showpoint);
     outFile<<"Make and model: "<<automobile<<endl;
     outFile<<"Year: "<<year<<endl;
     outFile<<"Was asking: $"<<a_price<<endl;
     outFile<<"Now asking: $"<<d_price<<endl;
     outFile.close();*/

    /*char line[81];
    ifstream inFile;
    inFile.open("/Users/bill/Desktop/xcode/C++/c++_myfirst/carinfo1.txt");
    if(!inFile.is_open())
    {
        cout<<"Can't open the file.\n";
        exit(EXIT_FAILURE);
    }
    inFile.getline(line,81);
    while(inFile.good())
    {
        cout<<line<<endl;
        inFile.getline(line,81);
    }
    if(inFile.eof())
        cout<<"End of file reached.\n";
    else if(inFile.fail())
        cout<<"Input terminated by data mismatch.\n";
    
    inFile.close();*/
    int px = 6,py = 3;
    int currx,curry;
    for(currx = 5,curry = 3;currx!=px || curry != py;currx+=1,curry+=0)
    {
        cout<<"I am in"<<endl;
        cout<<"Current value."<<endl;
        cout<<currx<<" "<<curry<<endl;
    }
    
    
    return 0;
}
template <typename T>
T max5(T* ptr)
{
    int i;
    T max = ptr[0];
    for(i = 0;i<5;i++)
    {
        if(max<ptr[i])
            max = ptr[i];
        
    }
    return max;
}
template <> const char * max5(const char * ar[])
{
    int i;
    const char * ptr = ar[0];
    for(i = 0;i<5;i++)
    {
        if(strlen(ptr)<strlen(ar[i]))
            ptr = ar[i];
        
    }
    return ptr;
}
