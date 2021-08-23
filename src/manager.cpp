#include <cstdlib>
#include "manager.h"
#include "employee.h"

unsigned int Manager::id{1};

Manager::Manager()
{
   _id = id++;
}

void Manager::addEmployee()
{
   Employee * emp = new Employee;
   _team.push_back(emp);
}

Manager::~Manager()
{
   for(auto &emp : _team )
      delete emp;
}

void Manager::addTaskSize(unsigned int derective)
{
   std::srand(_id + derective);
   taskSize = std::rand()%_team.size() + 1;
}

void Manager::distributionOfTask()
{
   for(int i = 0; i < taskSize; ++i)
   {
      if(!_team[i]->isWork())
         _team[i]->setTask(true, static_cast<Manager::Task>(std::rand()%3));
   }
}