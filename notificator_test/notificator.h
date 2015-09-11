#pragma once 

#include "i_notificator.h"

template<typename data, typename consumer> class notificator : public i_notificator<data>
{
public:
   typedef consumer* t_consumer_ptr;
   typedef void(consumer::*t_member_ptr)(const data &d);

   notificator(t_consumer_ptr c, t_member_ptr f ) :m_consumer(c), m_foo(f)
   {
   }

   virtual void notify(const data &d)
   {  
      if (m_consumer && m_foo)
      {
         (m_consumer->*m_foo)(d);
      }
   }

   t_consumer_ptr    m_consumer;
   t_member_ptr      m_foo;
   
};