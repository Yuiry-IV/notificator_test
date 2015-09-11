#pragma once

#include "i_broadcaster.h"

class real_provider
{
public:
   real_provider(i_broadcaster<bool> &b) :m_b(b)
   {
   }

   void provide()
   {
      std::cout << "\naction(false)\n";
      m_b.provide(false);
      std::cout << "\naction(true)\n";
      m_b.provide(true);
      std::cout << "\naction(false)\n";
      m_b.provide(false);
   }

   i_broadcaster<bool> &m_b;
};
