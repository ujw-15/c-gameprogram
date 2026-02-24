#pragma once
#include "Stat.h"
class strength : public Stat
{
public:
    strength();
  virtual ~strength();

   virtual void Enhance() override;
};

