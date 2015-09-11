#pragma once 

template <typename data> class i_notificator
{
public:
   virtual void notify(const data &) = 0;
};
