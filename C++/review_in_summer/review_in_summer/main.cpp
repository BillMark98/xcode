//
//  main.cpp
//  review_in_summer
//
//  Created by Bill on 17/9/4.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
const int Div = 6;
const int Length = 66;
void subdivide(char[],int head, int tail,int level);
template <typename T> void recycle(T t);
template <typename T> void recycle(T * t);

int main(int argc, const char * argv[]) {
    using namespace std;
    /*char ch[20];
    char ch2[20];
    cout << "enter.\n";
    cin >> ch;
    cout <<"The input: "<< ch << endl;
    cout <<"Enter again.\n";
    cin >> ch2;
    //cin.getline(ch2,20);
    cout <<"The number two: " << ch2 << endl;
    */
    
   /* char ch;
    cout << "Enter.\n";
    
    int count = 0;
    while( cin.get(ch))
    {
        cout << ch;
        count ++;
    }
    cout << endl << count <<
    " characters counted.\n";
    */
    /*cout<< 12.34<<endl;
    cout << 1231341.12312<<endl;
    cout << 123.0<<endl;
    
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<endl;
    cout<< 12.34<<endl;
    cout << 1231341.12312<<endl;
    cout << 123.0<<endl;
    cout.precision(2);
    cout<<endl;
    cout<< 12.34<<endl;
    cout << 1231341.12312<<endl;
    cout << 123.0<<endl;
    cout.setf(ios_base::showpoint);
    cout<<endl;
    cout<< 12.34<<endl;
    cout << 1231341.12312<<endl;
    cout << 123.0<<endl;
     */
    ofstream outFile;
    /*outFile.open("source.txt");
    for(double x: {1.2,1.4,1.6,1.8,2.0})
    {
        outFile << x << endl;
        cout << x << endl;
    }
    outFile.close();
     */
    /*ifstream inFile;
    inFile.open("source.txt");
    if(!inFile.is_open())
    {
        cout <<"Can't open the file.\n";
        exit(EXIT_FAILURE);
    }
    double x;
    int count = 0;
    double sum = 0;
    
    while(inFile >> x)
    {
        cout << x <<endl;
        ++count;
        sum += x;
        
        
    }
    if(inFile.eof())
    {
        cout << "End of File reached\n";
        
    }
    else if(inFile.fail())
    {
        cout << "Input terminated of data mismatch.\n";
        inFile.clear();
        char ch;
        while(inFile.get(ch))
            cout.put(ch);
        cout <<"\nThat's the chief culprit.\n";
        cout << "The value of EOF is "<<EOF<<endl;
        
    }
    else
    {
        cout << "Input terminated for unknown reasons.\n";
        
    }
    cout << "There are " << count << " doubles counted.\n"
    << " Sum: "<< sum << endl;
    inFile.close();
     */
    /*char arr[Length];
    for(char & x: arr)
        x = ' ';
    arr[0]='|';
    arr[Length - 1] = '\0';
    arr[Length -2 ] = '|';
    for(int i = 1; i <= Div; i++)
    {
        subdivide(arr, 0, Length - 2, i);
        for(int j = 0; j < Length -1 ; j++)
            cout << arr[j];
        cout << endl;
        for(int j = 1; j < Length - 2; j++)
            arr[j] = ' ';
    }
*/
    /*cout.width(15);
    cout << "Hello"<<endl;
     */
    struct blot {int a; char b[10];};
    blot ink = {25,"spots"};
    recycle(&ink);
    return 0;
}
void subdivide(char arr[],int head, int tail,int level)
{
    if(level == 0)
        return;
    int mid = (head + tail)/2;
    arr[mid] = '|';
    subdivide( arr, head,mid,level -1 );
    subdivide( arr, mid, tail,level -1);
}
template <typename T> void recycle(T t)
{
    std::cout<<"This in Type A T t\n";
}

template <typename T> void recycle(T * t)
{
    std::cout<<"This is in Type B T * t\n";
}
