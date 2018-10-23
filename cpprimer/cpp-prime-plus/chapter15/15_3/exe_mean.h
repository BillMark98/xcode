#ifndef exc_mean_h
#define exc_mean_h

#include <iostream>
#include <string>
#include <stdexcept>

class bad_mean : public std::logic_error
{
protected:
    double a;
    double b;
public:
    bad_mean(double a_val, double b_val,const std::string & s = "Bad arguments") :
    std::logic_error(s),a(a_val),b(b_val) { }  // default value must be at the end
    // e.g const string & s="wrong", double a_val, double b_val is wrong
    virtual ~bad_mean() throw() {}
    virtual void report() const {};  // must initialize even with {}
    
};
class bad_hmean : public bad_mean
{
public:
    explicit bad_hmean(double a_val, double b_val,
                       const std::string &s = "For harmonic mean, arguments cannot be a = -b") :
    bad_mean(a_val,b_val,s) {}  // cannot use std::logic_error(s) Error : Type 'std::logic_error' is not a
    // direct or virtual base of 'bad_hmean'
    void report() const { std::cout << "The arguments for harmonic mean\n"
        << "Value a: " << a << "\tValue b: " << b << std::endl; }
    virtual bad_hmean() throw() {}
    
};
class bad_gmean : public bad_mean
{
public:
    explicit bad_gmean(double a_val, double b_val,
                       const std::string &s = "For geometric mean, arguments cannot be negative")
    : bad_mean(a_val,b_val,s) {}
    void report() const {std::cout << "The arguments for geometric mean\n"
        << "Value a: " << a << "\tValue b: " << b << std::endl; }
    virtual bad_gmean() throw() {}
};


#endif /* exc_mean_h */
