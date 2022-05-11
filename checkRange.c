#include "header.h"

int count=0;

int isChargeNotInRange(float chargeRate)
{
  if(chargeRate > 0.8)
  {
    count++;
  }
  return count;
}

int isStateNotInRange(float soc)
{
    if(soc < 20 || soc > 80) 
    {
      count++;
    }
  return count;
}

int isTempNotInRange(float temperature)
{
    if(temperature < 0 || temperature > 45) 
    {
      count++;
    }
  return count;
}
