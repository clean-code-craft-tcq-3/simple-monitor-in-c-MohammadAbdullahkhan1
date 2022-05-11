#include "header.h"

int count=0;

int isChargeRateInRange(float chargeRate)
{
  chargeRate > 0.8?count:count++;
  return count;
}

int isSocInRange(float soc)
{
    if(soc < 20 || soc > 80) 
    {
      count++;
    }
    return count;
}

int isTemperatureInRange(float temperature)
{
    if(temperature < 0 || temperature > 45) 
    {
      count++;
    }
    return count;
}
