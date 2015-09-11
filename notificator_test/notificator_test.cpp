// notificator_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "real_consumer.h"
#include "real_provider.h"

#include "notificator.h"
#include "broadcaster.h"

int _tmain(int argc, _TCHAR* argv[])
{
   real_consumer c;

   broadcaster<bool> b(notificator<bool, real_consumer>(&c, &real_consumer::cousume));

   real_provider p(b);
   
   p.provide();

	return 0;
}

