/* Ghidra address: 0113dd70 */
/* Ghidra symbol: FUN_0113dd70 */


void FUN_0113dd70(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_3;
  if (sVar1 == 0x25) {
    *param_3 = 0;
  }
  else if (sVar1 == 0x26) {
    FUN_0113b880(param_1,param_1);
    *param_3 = 0;
  }
  else if (sVar1 == 0x27) {
    *param_3 = 0;
  }
  else if (sVar1 == 0x28) {
    FUN_0113b340(param_1,param_1);
    *param_3 = 0;
  }
  return;
}

