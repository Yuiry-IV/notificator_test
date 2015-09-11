#pragma once

#include "i_notificator.h"
#include "i_broadcaster.h"

template<typename data> class broadcaster : public i_broadcaster<data>
{
public:
   broadcaster(i_notificator<data> &n) :m_n(n)
   {

   }
   void provide(const data &v)
   {
      m_n.notify(v);
   }
   i_notificator<data> &m_n;
};
