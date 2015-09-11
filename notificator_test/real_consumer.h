
#pragma once 

#include <iostream>

class real_consumer
{
public:
   void cousume(const bool &v)
   {
      std::cout << "cousume(" << v << ")\n";
   }
};
