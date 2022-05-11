#include "header.h"

int count=0;

int isChargeInRange(float chargeRate)
{
  if(chargeRate > 0.8)
//   ?count:count++;
  return count;
}

int isStateInRange(float soc)
{
    if(soc < 20 || soc > 80) 
    {
      count++;
    }
    return count;
}

int isTempInRange(float temperature)
{
    if(temperature < 0 || temperature > 45) 
    {
      count++;
    }
    return count;
}
