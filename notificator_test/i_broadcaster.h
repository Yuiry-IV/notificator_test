
#pragma once 

template <typename data>
class i_broadcaster
{
public:
   virtual void provide(const data &v) = 0;
};
