#pragma once

#include "Resource.hpp"

class ResourceManager{
  private:
    Resource res;
  
  public:
   ResourceManager(){
     this->res = Resource();
   }

  double get(){
    return this->res.get();
  }

    ResourceManager(const ResourceManager&)
    {
      this->res = ResourceManager();
    }
    ResourceManager(ResourceManager&&) noexcept
    {

    }
    ResourceManager& operator=(const ResourceManager&)
    {
  
        return *this;
    }
    ResourceManager& operator=(ResourceManager&&) noexcept
    {
 
        return *this;
    }

  ~ResourceManager(){

  }
};
