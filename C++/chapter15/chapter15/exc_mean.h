//
//  exc_mean.h
//  chapter15
//
//  Created by Bill on 11/4/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef exc_mean_h
#define exc_mean_h
#include <iostream>
class bad_hmean
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0): v1(a),v2(b) {}
    void mesg();
};
inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 <<"): "
              << " invalid arguments: a = -b\n";
}
class bad_gmean
{
private:
    double v1;
    double v2;
public:
    bad_gmean(double a = 0,double b = 0): v1(a),v2(b) {}
    const char * mesg();
};
inline const char * bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}
#endif /* exc_mean_h */
