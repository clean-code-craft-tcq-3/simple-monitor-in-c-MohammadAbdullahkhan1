#include <stdio.h>
#include <assert.h>
#include "header.h"

int count;

int batteryIsOk(float temperature, float soc, float chargeRate) {
  count = isTempNotInRange(temperature);
  count = isStateNotInRange(soc);
  count = isChargeNotInRange(chargeRate);
  return count;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(50, 85, 0));
}
