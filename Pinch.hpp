//
//  Pinch.hpp
//  
//
//  Created by Bridget Wiffler on 11/30/20.
//

#ifndef Pinch_hpp
#define Pinch_hpp

#include <stdio.h>
#include <string>

class Pinch
{
public:
  Pinch(const std::string& config_);
  
private:
  const std::string _config;
};
#endif /* Pinch_hpp */
