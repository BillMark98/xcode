//
//  exc_mean.h
//  ptr
//
//  Created by Bill on 11/11/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#ifndef exc_mean_h
#define exc_mean_h
#include <string>
#include <stdexcept>
class bad_hmean : public std::logic_error
{
public:
    explicit bad_hmean(const std::string &s = "arguments cannot be a = -b") :
    std::logic_error(s) {}
    
    
};
class bad_gmean : public std::logic_error
{
public:
    explicit bad_gmean(const std::string &s = "arguments cannot be negative") :
    std::logic_error(s) {}
};

#endif /* exc_mean_h */
