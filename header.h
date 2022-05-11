#include <stdio.h>
#include <assert.h>

int isTempNotInRange(float temperature);
int isStateNotInRange(float soc);
int isChargeNotInRange(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);
