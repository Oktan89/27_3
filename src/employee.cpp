#include "employee.h"

unsigned int Manager::id{1};

Manager::Manager()
{
   _id = id++;
}