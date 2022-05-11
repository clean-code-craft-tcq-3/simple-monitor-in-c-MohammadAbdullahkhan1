#include <stdio.h>
#include <assert.h>

int isTempInRange(float temperature);
int isStateInRange(float soc);
int isChargeInRange(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);
