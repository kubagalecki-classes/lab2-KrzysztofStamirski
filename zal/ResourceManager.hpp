
#pragma once

#include "Resource.hpp"

class ResourceManager
{
  Resource* a;

public:

    ResourceManager()
    {
      a = new Resource;
    }

    ResourceManager(const ResourceManager& rm)
    {
      a = new Resource{*rm.a};
    }

    ResourceManager(ResourceManager&& rm)
    { 
      a = nullptr;
      a = rm.a;
      rm.a = nullptr;
    }

    ~ResourceManager() 
    {
      delete a;
    }

    double get() 
    { 
      return a->get(); 
    }

    ResourceManager operator=(const ResourceManager& rm)
    {
        if (&rm != this) {
            delete a;
            a = new Resource{*rm.a}; 
        }
        return *this;
    }

    ResourceManager operator=(ResourceManager&& rm)
    {
        if (&rm != this) {
            delete a;
            a = rm.a;
            rm.a = nullptr;
        }
        return *this;
    }
};