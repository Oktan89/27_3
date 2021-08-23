#pragma once
#include "manager.h"

class Employee
{
    bool _work{false};
    Manager::Task _task;
public:
  
    bool isWork()
    {
        return _work;
    }
    void setTask(bool work, Manager::Task task)
    {
        _task = task;
        _work = true;
    }
};