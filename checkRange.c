#include "header.h"

int count=0;

void isChargeNotInRange(float chargeRate)
{
  if(chargeRate > 0.8)
  {
    count++;
  }
}

void isStateNotInRange(float soc)
{
    if(soc < 20 || soc > 80) 
    {
      count++;
    }
}

void isTempNotInRange(float temperature)
{
    if(temperature < 0 || temperature > 45) 
    {
      count++;
    }
}
