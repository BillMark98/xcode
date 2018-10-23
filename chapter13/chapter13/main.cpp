//
//  main.cpp
//  chapter13
//
//  Created by Bill on 17/6/17.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
class Within
{
private:
    char c;
public:
    Within()
    { c = 'i';std::cout <<"Within Default constructor.\n";
    }
    Within(const char ca){std::cout<<"My constructor within\n";c = ca;}
    Within(const Within & s) {std::cout << "Copy WITHIN function used\n"; c = s.c;}
    
    Within & operator = (const Within & s) {
        std::cout << "Assign Operator WITHIN used.\n";
        c = s.c;
        return * this;
    }
    ~Within(){std::cout << "Destructor WITHTIN used.\n";}
    
    
};
class CTest
{
    private:
    int num;
    Within me;
    
    
    
public:
    CTest();
    CTest(int i,Within & s);
    CTest(const CTest &);
    CTest & operator=(const CTest &);
    ~CTest();
    
};
int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "Within Class temp:\n";
    Within temp('a');
    putchar('\n');
    cout << "Temp('a') \n";
    //temp('b');
    putchar('\n');
    cout << "Ctest aa begin now: \n";
    CTest aa (1,temp);
    putchar('\n');
    cout << "CTest a begin now:\n";
    CTest a;
    putchar('\n');
    cout << "CTest b now :\n";
    
    
    CTest b(a);
    putchar('\n');
    cout << "CTEst c now :\n";
    CTest c = b;
    putchar('\n');
    cout << "CTest c = a\n";
    c = a;
    putchar('\n');
    return 0;
}
CTest::CTest() : num(2)
{
    
    std::cout << "Default constructor used.\n";
}
CTest::CTest(int i, Within &s): num(i)
{
    me = s;
    std::cout << "My constructor CTEST used.\n";
}
CTest::CTest(const CTest &s):me(s.me)
{
    
    std::cout << "Copy function used.\n";
}
CTest & CTest:: operator=(const CTest & s)
{
    num = s.num;
    me = s.me;
    std::cout << "Operator used\n";
    return *this;
}
CTest::~CTest()
{
    std::cout << "Destructor used.\n";
}
